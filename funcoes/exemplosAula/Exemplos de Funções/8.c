#include<stdio.h>

int g (int x) {
  return x + 2;
  }

void f (int x, char y) {
  printf("\nOs valores passados foram: %d, %c", x, y);
  }

main(void) {
  int a=66;
  char b='B';
  f(65, 'A'); /* constantes  --  65, A */
  f(a, b); /* vari�veis    ----  66, B */
  f(a++, b+1); /* express�es     ---  66, C */
  f(g(a), b+2); /* fun��o e express�o      prim: 68 ou 69   /   seg: D ou E */
  }
