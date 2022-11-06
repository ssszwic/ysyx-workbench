package main

import chisel3._
import chisel3.util._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

object LessSpec extends ChiselUtestTester {
  val tests = Tests {
    test("Less") {
      testCircuit(new alu.Less) { dut =>
        import scala.util.Random
        var data1: Long = 0
        var data2: Long = 0
        // unsigned less
        dut.io.unsignSel.poke(true.B)
        dut.io.geSel.poke(false.B)
        for(i <- 0 until 1000) {
          data1 = Random.nextLong()
          data2 = Random.nextLong()
          dut.io.data1.poke(("h" + data1.toHexString).U)
          dut.io.data2.poke(("h" + data2.toHexString).U)
          dut.io.result.expect(((data1.toHexString < data2.toHexString) && (data1.toHexString.length == data2.toHexString.length))
                              || (data1.toHexString.length < data2.toHexString.length), s"test1: data1:${data1.toHexString} data2:${data2.toHexString}")
        }

        // unsigned greater equal
        dut.io.unsignSel.poke(true.B)
        dut.io.geSel.poke(true.B)
        for(i <- 0 until 1000) {
          data1 = Random.nextLong()
          data2 = Random.nextLong()
          dut.io.data1.poke(("h" + data1.toHexString).U)
          dut.io.data2.poke(("h" + data2.toHexString).U)
          dut.io.result.expect(((data1.toHexString >= data2.toHexString) && (data1.toHexString.length == data2.toHexString.length))
                              || (data1.toHexString.length > data2.toHexString.length), s"test1: data1:${data1.toHexString} data2:${data2.toHexString}")
        }

        // signed less
        dut.io.unsignSel.poke(false.B)
        dut.io.geSel.poke(false.B)
        for(i <- 0 until 1000) {
          data1 = Random.nextLong()
          data2 = Random.nextLong()
          dut.io.data1.poke(("h" + data1.toHexString).U)
          dut.io.data2.poke(("h" + data2.toHexString).U)
          dut.io.result.expect((data1 < data2).B, s"test1: data1:${data1.toHexString} data2:${data2.toHexString}")
        }

        // signed greater equal
        dut.io.unsignSel.poke(false.B)
        dut.io.geSel.poke(true.B)
        for(i <- 0 until 1000) {
          data1 = Random.nextLong()
          data2 = Random.nextLong()
          dut.io.data1.poke(("h" + data1.toHexString).U)
          dut.io.data2.poke(("h" + data2.toHexString).U)
          dut.io.result.expect((data1 >= data2).B, s"test1: data1:${data1.toHexString} data2:${data2.toHexString}")
        }
      }
      println("SUCCESS!")
    }
  }
}