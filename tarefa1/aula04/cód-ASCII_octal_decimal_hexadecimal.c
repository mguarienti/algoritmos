#include<stdio.h>

/* 06 - Dado um car�cter, informe o seu c�digo A SCII em octal, decimal e
hexadecimal. */

main() {

  int int1;
  char char1;

  printf("INSIRA UM CARACTERE: ");
  scanf("%c", &char1);

  int1 = char1;

  printf("O EQUIVALENTE EM ASCII E %c", int1);

  }
