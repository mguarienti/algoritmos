#include <stdlib.h>
#include <stdio.h>
int main() {
  int r, i;
  unsigned s;
  printf("Digite um valor para seed: ");
  scanf("%d", &s);
  srand(s);
  for (i=0; i < 20; i++) {
    r=rand();
    printf("%d\n",r);
    }
  }
