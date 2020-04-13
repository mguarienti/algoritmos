#include<stdio.h>

/* 02 - Crie um programa para a conversão e Real para Dolar e Euro, utilize
constantes, exiba o resultado. */

main() {

  float real=0;
  float rdol=0;
  float reur=0;
  //Considerando os valores constantes para dolar e euro abaixo:
  const float dolar=3.99;
  const float euro=4.23;


  printf("# CONVERSAO DE MOEDAS #\n\n");
  printf("# Dolar: RS %.3f\n", dolar);
  printf("# Euro: RS %.3f\n", euro);

  printf("INSIRA O VALOR, EM REAIS, A SER CONVERTIDO: \n");
  scanf ("%f", &real);

  //Realiza cálculo:
  rdol = (real*dolar);
  reur = (real*euro);

  printf("\n\n");
  printf("OS VALORES CONVERTIDOS SAO: \n");
  printf("Dolares = %.3f\n", rdol);
  printf("Euros = %.3f \n\n", reur);


  }
