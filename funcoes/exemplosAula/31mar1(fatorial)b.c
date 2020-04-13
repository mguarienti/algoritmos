#include<stdio.h>

int fatorial(int n) {
  if (n>1)
    return n * fatorial(n-1);
  return 1;
  }

main() {
  int n, fat;
  printf("Qual o valor para calculo do fatorial: ");
  scanf ("%d", &n);
  fat = fatorial(n);
  printf("O fatorial de %d e %d", n, fat);
  }
