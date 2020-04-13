#include<stdio.h>

int max(int n1, int n2) {
  if (n1 > n2)
    return n1;
  return n2;
  }

main () {
  int n1, n2, n3, n4;
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  scanf("%d", &n4);
  printf("Maior: %d", max(    max(n1, n2)  ,  max(n3, n4)  );
  }
