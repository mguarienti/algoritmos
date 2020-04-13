/* Escreva um programa que leia três valores inteiros A, B e C, ordenados,
todos maiores que 1000 e diferentes entre si. Esses valores devem ser
passados como parâmetro para uma função, de onde retorna um valor
gerado de forma pseudo-aleatória que esteja no intervalo entre
(incluindo as extremidades do intervalo) 1000 e A
ou no intervalo definido entre B e C. Cada valor, em qualquer dos
dois intervalos, deve ter igual probabilidade de ser sorteado. Após o
retorno, o valor deve ser exibido. */

/* VERSAO COM PROBLEMAS
HAVENDO DIFERENCA DE TAMANHO ENTRE OS INTERVALOS, OS VALORES DO INTERVALO
MENOR TEM MAIOR CHANCE DE SEREM GERADOS */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int geraNosIntervalos(int a, int b, int c) {
  int x;
  x = rand() % 2;   /* em qual intervalo vou gerar meu numero */
  if (x == 0) {  /* devo gerar um numero entre 1000 e A */
    x = rand() % (a-1000+1) + 1000;
    }
  else {
    x = rand() % (c-b+1) + b;
    }
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
