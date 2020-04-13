#include<stdio.h>

int n1, n2, maior1, maior2, maior;

void max(void) {
  if (n1 > n2) {
    maior2 = n1;
    return;
    }
  else {
    maior2 = n2;
    return;
    }
  }

main () {
  scanf("%d", &n1);
  scanf("%d", &n2);
  max();
  maior1 = maior2;
  scanf("%d", &n1);
  scanf("%d", &n2);
  max();
  n1 = maior1;
  n2 = maior2;
  max();
  printf("Maior: %d", maior2);
  }
