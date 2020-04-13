#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main() {
  int r, i;
  srand((unsigned)time(NULL));
  for (i=0; i < 20; i++) {
    r=rand();
    printf("%d\n",r);
    }
  }
