package main

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

object ShiftSpec extends ChiselUtestTester {
  val tests = Tests {
    test("Shift") {
      // testCircuit(new Shift) { dut =>
      //     dut.io.inst.poke("h03313423".U)
      //     println(dut.io.peek())
      //     println(dut.io_alu.peek())
      // }
      // println("SUCCESS!")
    }
  }
}
