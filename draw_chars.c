#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_8x12(char c)
{
  c -= 0x20;
  for (char row = 0; row < 12; row++) {
    unsigned short rowBits = font_8x12[c][row];
    for (char col = 0; col < 12; col++) {
      unsigned short colMask = 1 << (11-col); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}
