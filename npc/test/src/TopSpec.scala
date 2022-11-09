package main

import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

object TopSpec extends ChiselUtestTester {
  val tests = Tests {
    test("Top") {
      testCircuit(new Top) { dut =>
        
      }
      println("SUCCESS!")
    }
  }
}
