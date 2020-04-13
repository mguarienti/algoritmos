#include<stdio.h>
int funcao () {
  int x;
  scanf("%d", &x);
  return x+1; /* retorna variavel */
  }

void main(void) {
  printf("%d", funcao());
  }

/*
void main(void) {
  int y;
  y = funcao();
  y++;
  printf ("%d", y);
  }

void main(void) {
  int y;
  y = 4+funcao()-5;
  printf ("%d", y);
  }

void main(void) {
  printf("%d", funcao()+1);
  }
*/
