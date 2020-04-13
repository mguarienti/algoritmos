#include<stdio.h>

int n1, n2, maior1, maior2, maior;

int max(void) {
  if (n1 > n2) {
    return n1;
    }
  else {
    return n2;
    }
  }

main () {
  scanf("%d", &n1);
  scanf("%d", &n2);
  maior1 = max();
  scanf("%d", &n1);
  scanf("%d", &n2);
  maior2 = max();
  n1 = maior1;
  n2 = maior2;
  maior2 = max();
  printf("Maior: %d", maior2);
  }
