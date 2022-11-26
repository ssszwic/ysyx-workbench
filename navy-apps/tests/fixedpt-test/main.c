#include <stdio.h>
#include <fixedptc.h>
#include <assert.h>

int main() {
  fixedpt a;
  fixedpt b;

  // floor
  a = fixedpt_rconst(0.5);
  assert(fixedpt_floor(a) == fixedpt_rconst(0));
  a = fixedpt_rconst(-0.5);
  assert(fixedpt_floor(a) == fixedpt_rconst(-1));

  // ceil
  a = fixedpt_rconst(0.5);
  assert(fixedpt_muli(a, 10) == fixedpt_rconst(5));
  a = fixedpt_rconst(-0.5);
  assert(fixedpt_muli(a, 10) == fixedpt_rconst(-5));

  // divi
  a = fixedpt_rconst(5);
  assert(fixedpt_divi(a, 10) == fixedpt_rconst(0.5));
  a = fixedpt_rconst(-5);
  assert(fixedpt_divi(a, 10) == fixedpt_rconst(-0.5));

  // ceil
  a = fixedpt_rconst(0.5); b = fixedpt_rconst(10);
  assert(fixedpt_mul(a, b) == fixedpt_rconst(5));
  a = fixedpt_rconst(-0.5);
  assert(fixedpt_mul(a, b) == fixedpt_rconst(-5));

  // divi
  a = fixedpt_rconst(5); b = fixedpt_rconst(10);
  assert(fixedpt_div(a, b) == fixedpt_rconst(0.5));
  a = fixedpt_rconst(-5);
  assert(fixedpt_div(a, b) == fixedpt_rconst(-0.5));
  
  printf("PASS!\n");
}