package main

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

object MulSpec extends ChiselUtestTester {
  val tests = Tests {
    test("Mul") {
      testCircuit(new alu.Mul) { dut =>
          // signed
          dut.io.wordSel.poke(false.B)
          dut.io.wordSel.poke("b00".U)
          dut.io.data1.poke(128.U)
          dut.io.data2.poke(128.U)
          dut.io.result.expect((128*128).U)
      }
      println("SUCCESS!")
    }
  }
}
