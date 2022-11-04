import chisel3._
import chiseltest._
import chisel3.experimental.BundleLiterals._

import utest._

/**
  * This is a trivial example of how to run this Specification
  * From within sbt use:
  * {{{
  * testOnly gcd.GcdDecoupledTester
  * }}}
  * From a terminal shell use:
  * {{{
  * sbt 'testOnly gcd.GcdDecoupledTester'
  * }}}
  */
object GCDSpec extends ChiselUtestTester {
  val tests = Tests {
    test("GCD") {
      testCircuit(new IFU) { dut =>
          
      }
    }
  }
}
