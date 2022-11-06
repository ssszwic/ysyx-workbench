package main

import chisel3._
import chisel3.util._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

object ShiftSpec extends ChiselUtestTester {
  val tests = Tests {
    test("Shift") {
      testCircuit(new alu.Shift) { dut =>
        // shift left
        dut.io.wordSel.poke(false.B)
        dut.io.rightSel.poke(false.B)
        dut.io.arithSel.poke(false.B)
        dut.io.data1.poke("h0000_0257_0111_0000".U)
        dut.io.data2.poke(4.U)
        dut.io.result.expect("h0000_2570_1110_0000".U)
        dut.io.data1.poke("h0000_0257_0111_0000".U)
        dut.io.data2.poke(63.U)
        dut.io.result.expect("h0000_0000_0000_0000".U)
        // shift right logical
        dut.io.wordSel.poke(false.B)
        dut.io.rightSel.poke(true.B)
        dut.io.arithSel.poke(false.B)
        dut.io.data1.poke("h0000_0257_0111_0000".U)
        dut.io.data2.poke(63.U)
        dut.io.result.expect("h0000_0000_0000_0000".U)
        dut.io.data1.poke("hf257_0111_0000_0000".U)
        dut.io.data2.poke(32.U)
        dut.io.result.expect("h0000_0000_f257_0111".U)
        // shift right arich
        dut.io.wordSel.poke(false.B)
        dut.io.rightSel.poke(true.B)
        dut.io.arithSel.poke(true.B)
        dut.io.data1.poke("h0000_0257_0111_0000".U)
        dut.io.data2.poke(63.U)
        dut.io.result.expect("h0000_0000_0000_0000".U)
        dut.io.data1.poke("hf257_0111_0000_0000".U)
        dut.io.data2.poke(32.U)
        dut.io.result.expect("hffff_ffff_f257_0111".U)
        // word shift right logical
        dut.io.wordSel.poke(true.B)
        dut.io.rightSel.poke(true.B)
        dut.io.arithSel.poke(false.B)
        dut.io.data1.poke("hf257_0111_0257_0111".U)
        dut.io.data2.poke(16.U)
        dut.io.result.expect("h0000_0000_0000_0257".U)
        // word shift left arith
        dut.io.wordSel.poke(true.B)
        dut.io.rightSel.poke(true.B)
        dut.io.arithSel.poke(true.B)
        dut.io.data1.poke("h0000_1234_f257_0811".U)
        dut.io.data2.poke(16.U)
        dut.io.result.expect("hffff_ffff_ffff_f257".U)
      }
      println("SUCCESS!")
    }
  }
}
