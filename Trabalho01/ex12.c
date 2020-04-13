#include<stdio.h>

/* 12. Crie um programa que receba via teclado uma temperatura em graus centigrados e converta
para Fahrenheit, exiba ambas temperaturas */

main() {

  float c=0, f=0;

  printf("INFORME A TEMPERATURA EM CELCIUS: ");
  scanf("%f", &c);

  f = (9 * c + 160) / 5;

  printf("\nA TEMPERATURA DE %.2f ºC E EQUIVALENTE A APROXIMADAMENTE %.2f ºC\n", c, f);

  }
