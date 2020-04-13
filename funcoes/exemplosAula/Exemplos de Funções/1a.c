#include<stdio.h>

int n1, n2, maior1, maior2, maior;

void max(void) {
  if (n1 > n2)
    maior2 = n1;
  else
    maior2 = n2;
  }

main () {
  scanf("%d", &n1);
  scanf("%d", &n2);
  max();
  maior1 = maior2;
  scanf("%d", &n1);
  scanf("%d", &n2);
  max();
  if (maior1 > maior2)
    maior = maior1;
  else
    maior = maior2;  /* fim da terceira comparacao */

  printf("Maior: %d", maior);
  }
