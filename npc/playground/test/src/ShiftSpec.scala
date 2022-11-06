package main

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

object ShiftSpec extends ChiselUtestTester {
  val tests = Tests {
    test("Shift") {
      testCircuit(new alu.Shift) { dut =>
          // left shif
      }
      println("SUCCESS!")
    }
  }
}
