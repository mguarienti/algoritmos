#include<stdio.h>

/* 4. Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.
Use o operador matemático % (resto da divisão ou módulo) e o teste condicional if. */

int main() {

 int a=0;

 printf("INSIRA UM NUMERO: ");
 scanf("%d", &a);

 if (a%2 == 0){
    printf("\nO valor e PAR!\n");
 }else{
    printf("\nO valor e IMPAR!\n");
    }
 }


