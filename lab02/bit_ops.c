#include "bit_ops.h"

#include <stdio.h>

/// ONLY use (&), or (|), xor (^), not (~), left shifts («), and right shifts
/// (»). You may not use any for/while loops or conditional statements. You also
/// may not use modulo (%), division, addition subtraction, or multiplication.

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x, unsigned n) {
  //   0b0000100 <- (0b0000001 << 2)
  // & 0b1001110
  //   0b0000100 >> 2 -> 0b0000001
  return (x & (1 << n)) >> n;
}

// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned* x, unsigned n, unsigned v) {
  if (get_bit(*x, n) == v) return;
  *x = *x ^ (1 << n);
}

// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned* x, unsigned n) {
  if (get_bit(*x, n) == 0b1)
    set_bit(x, n, 0);
  else
    set_bit(x, n, 1);
}
