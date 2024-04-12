// clang-format off
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lfsr.h"
#include "bit_ops.h" // rules are meant to break...
// clang-format on

void lfsr_calculate(uint16_t *reg) {
  unsigned bit_0 = get_bit(*reg, 0);
  unsigned bit_2 = get_bit(*reg, 2);
  unsigned bit_3 = get_bit(*reg, 3);
  unsigned bit_5 = get_bit(*reg, 5);
  unsigned bit = ((bit_0 ^ bit_2) ^ bit_3) ^ bit_5;

  *reg = *reg >> 1;
  set_bit((unsigned *)reg, 15, bit);
}
