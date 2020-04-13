#include<stdio.h>

main() {

/* Dadas as duas notas de um aluno, informe a sua média final. */

  float nota1=0;
  float nota2=0;
  float media=0;

  printf("INSIRA A PRIMEIRA NOTA: ");
  scanf ("%f", &nota1);
  printf("Nota 1 informada = %.2f\n", nota1);

  printf("\n");

  printf("INSIRA A SEGUNDA NOTA: ");
  scanf ("%f", &nota2);
  printf("Nota 2 informada = %.2f\n", nota2);
  printf("\n");

  //Realiza cálculo:
  media = ((nota1+nota2)/2);

  printf("\n");
  printf("A media das notas e: %.2f\n", media);

  }
