#include<stdio.h>

void troca (int, int);

void main(void) {
  int x = 5, y =10;
  printf("\n%d - %d", x, y);
  troca(x, y);
  printf("\n%d - %d", x, y);
  }

void troca (int x, int y) {
  int z;
  printf("\n%d - %d", x, y);
  z = x;
  x = y;
  y = z;
  printf("\n%d - %d", x, y);
  }
