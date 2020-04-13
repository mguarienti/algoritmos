#include<stdio.h>

int max(int n1, int n2) {
  if (n1 > n2)
    return n1;
  return n2;
  }

main () {
  int n1, n2, maior1, maior2;
  scanf("%d", &n1);
  scanf("%d", &n2);
  maior1 = max(n1, n2);
  scanf("%d", &n1);
  scanf("%d", &n2);
  maior2 = max(n1, n2);
  printf("Maior: %d", max(maior1, maior2));
  }
