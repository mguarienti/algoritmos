#include<stdio.h>
/*
int funcao () {
  int x;
  scanf("%d", &x);
  if (x==0) return x-10;
  if (x<0) return x*-1;
  return x;
  }
*/

int funcao () {
  int x;
  scanf("%d", &x);
  if (x==0) x = x-10;
  if (x<0) x = x*-1;
  return x;
  }

main() {
  printf("\nValor: %d", funcao());
  }
