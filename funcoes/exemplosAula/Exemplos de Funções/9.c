#include<stdio.h>

int func(int a) {
  a++;
  printf("%d\n", a);   /*  6  */
  }

main() {
  int x;
  scanf ("%d", &x);  /*  5  */
  func(x);
  printf ("%d", x);  /*  5  */
  }
