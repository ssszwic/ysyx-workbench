package main

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

object RegFilesSpec extends ChiselUtestTester {
  val tests = Tests {
    test("RegFiles") {
      testCircuit(new RegFiles) { dut =>
          dut.io.inst.poke("h03313423".U)
          println(dut.io.peek())
          println(dut.io_alu.peek())
      }
    }
  }
}