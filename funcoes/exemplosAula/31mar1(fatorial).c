#include<stdio.h>

int fatorial(int n) {
   int res;
   if (n>0)      /*   n * (n-1)!       se     n > 0   */
     res = n * fatorial(n-1);
   else       /*        1           se     n == 0   */
     res = 1;
   return res;
  }

main() {
  int n, fat;
  printf("Qual o valor para calculo do fatorial: ");
  scanf ("%d", &n);
  fat = fatorial(n);
  printf("O fatorial de %d e %d", n, fat);
  }
