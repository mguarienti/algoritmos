#include<stdio.h>

void func() {
  int x;
  printf("Digite um numero para calcular o quadrado: ");
  scanf("%d", &x);
  x = x * x;
  printf("O quadrado do numero lido e %d.", x);
  }

main() {
  func();
  }


/* E se eu quiser fazer um programa para calcular a �rea de um c�rculo de raio
 r, posso usar essa fun��o para calcular o quadrado? */

/* E se eu quiser fazer um programa para calcular a �rea de um c�rculo de raio
 d E TAMBEM a �rea de um quadrado de lado d, posso usar essa fun��o para calcular o quadrado? */
