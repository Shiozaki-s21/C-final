/**
 * File              : vc_putnbr.c
 * Author            : Juan Valencia, Daisuke Katsumata
 * Date              : Tue 05 Feb 2019
 */

#include <stdio.h>

void vc_putnbr(int n) {
  int position = 1;
  for (int i = position; i <= n; i = i * 10) {
    position = i;
  }
  while (position > 0) {
    putchar('0' + n / position);
    n = n % position;
    position = position / 10;
  }
}
