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


/* E se eu quiser fazer um programa para calcular a área de um círculo de raio
 r, posso usar essa função para calcular o quadrado? */

/* E se eu quiser fazer um programa para calcular a área de um círculo de raio
 d E TAMBEM a área de um quadrado de lado d, posso usar essa função para calcular o quadrado? */
