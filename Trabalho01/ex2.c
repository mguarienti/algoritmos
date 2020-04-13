#include<stdio.h>

/* 2. Faça um programa para ler dois números reais e verificar se ambos são maiores que zero.
Caso positivo, informar “Valores são válidos”. Caso contrário, informar “Valores inválidos”. */

int main() {

 int a=0, b=0;

 printf("INSIRA O PRIMEIRO NUMERO: ");
 scanf("%d", &a);

 printf("INSIRA O SEGUNDO NUMERO: ");
 scanf("%d", &b);

 if (a > 0 && b > 0){
    printf("\nOs valores sao validos!\n");
 }else{
    printf("\nOs valores sao invalidos!\n");
 }



  }
