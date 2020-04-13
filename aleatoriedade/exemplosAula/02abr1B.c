/* Escreva um programa que leia tr�s valores inteiros A, B e C, ordenados,
todos maiores que 1000 e diferentes entre si. Esses valores devem ser
passados como par�metro para uma fun��o, de onde retorna um valor
gerado de forma pseudo-aleat�ria que esteja no intervalo entre
(incluindo as extremidades do intervalo) 1000 e A
ou no intervalo definido entre B e C. Cada valor, em qualquer dos
dois intervalos, deve ter igual probabilidade de ser sorteado. Ap�s o
retorno, o valor deve ser exibido. */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int geraNosIntervalos(int a, int b, int c) {
  int x, tamtot;
  tamtot = (a-1000+1) + (c-b+1);
  x = rand() % tamtot;  /* gera um numero no intervalo entre 0 e 101 */
  if (x < (a-1000+1))
    x += 1000;
  else
    x += b - (a-1000+1);
  return x;
  }

main() {
  int a, b, c;
  int i, x;
  int cont1 = 0, cont2 = 0;
  printf("Informe tres valores maiores que 1000, em ordem: ");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  srand((unsigned) time(NULL));
  for (i = 0; i < 25; i++) {
    x = geraNosIntervalos(a, b, c);
    if (x <= a)
      cont1++;
    else
      cont2++;
    printf("O valor gerado e %d.\n", geraNosIntervalos(a, b, c));
    }
  printf("No primeiro intervalo: %d.\nNo segundo intervalo %d.", cont1, cont2);
  }
