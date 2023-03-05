package main

import chisel3._
import chisel3.util._

import main.EXU
import main.IDU
import main.LSU
import main.IFU

object Tools {
  def myRegEnable(dst: Bundle, src: Bundle, en: Bool): Unit = {
    require(src.elements.toList.length == dst.elements.toList.length)
    for (i <- 0 until src.elements.toList.length) {
      val dataType = src.getElements(i).getClass()
      if(dataType == classOf[chisel3.UInt]) {
        dst.getElements(i) := RegEnable(src.getElements(i), 0.U, en)
      }else if(dataType == classOf[chisel3.SInt]){
        dst.getElements(i) := RegEnable(src.getElements(i), 0.S, en)
      }else if(dataType == classOf[chisel3.Bool]){
        dst.getElements(i) := RegEnable(src.getElements(i), false.B, en)
      }else {
        print("only support UInt, SInt, Bool")
      }
    }
  }

  def Immediate(inst: UInt, typeR: Bool, typeI: Bool, typeS: Bool, typeB: Bool, typeU: Bool, typeJ: Bool, typeCSR: Bool): UInt = {
    require(inst.getWidth == 32)
    val imme0 = Wire(UInt(33.W))
    val imme1 = Wire(UInt(11.W))
    val imme2 = Wire(UInt(8.W))
    val imme3 = Wire(UInt(1.W))
    val imme4 = Wire(UInt(6.W))
    val imme5 = Wire(UInt(4.W))
    val imme6 = Wire(UInt(1.W))
    
    when(typeCSR) {
      imme0 := 0.U
    }.otherwise{
      imme0 := Fill(33, inst(31))
    }

    when(typeCSR) {
      imme1 := 0.U
    }.elsewhen(typeU) {
      imme1 := inst(31, 20)
    }.otherwise{
      imme1 := Fill(11, inst(31))
    }

    when(typeCSR) {
      imme2 := 0.U
    }.elsewhen(typeU || typeJ) {
      imme2 := inst(19, 12)
    }.otherwise{
      imme2 := Fill(8, inst(31))
    }

    when(typeCSR) {
      imme3 := 0.U
    }.elsewhen(typeJ) {
      imme3 := inst(20)
    }.elsewhen(typeU) {
      imme3 := 0.U
    }.elsewhen(typeB) {
      imme3 := inst(7)
    }.otherwise{
      imme3 := inst(31)
    }

    when(typeCSR) {
      imme4 := 0.U
    }.elsewhen(typeU) {
      imme4 := Fill(6, 0.U)
    }.otherwise{
      imme4 := inst(30, 25)
    }

    when(typeCSR) {
      imme5 := inst(19, 16)
    }.elsewhen(typeJ || typeI) {
      imme5 := inst(24, 21)
    }.elsewhen(typeU) {
      imme5 := Fill(4, 0.U)
    }.otherwise{
      imme5 := inst(11, 8)
    }

    when(typeCSR) {
      imme6 := inst(15)
    }.elsewhen(typeI) {
      imme6 := inst(20)
    }.elsewhen(typeS) {
      imme6 := inst(7)
    }.otherwise{
      imme6 := 0.U
    }

    Seq(imme0, imme1, imme2, imme3, imme4, imme5, imme6).reduceLeft(Cat(_, _))
  }
}