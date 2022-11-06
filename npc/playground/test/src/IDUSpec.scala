package main

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

object IDUSpec extends ChiselUtestTester {
  val tests = Tests {
    test("IDU") {
      testCircuit(new IDU) { dut =>
          dut.io.inst.poke("h03313423".U)
          println(dut.io.peek())
          println(dut.io_alu.peek())
      }
    }
  }
}
