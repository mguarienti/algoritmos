#include<stdio.h>

/* 1. Faça um programa para ler dois números reais, faça a divisão do primeiro número pelo
segundo (se o segundo for diferente de zero). */

int main() {

 int a=0, b=0, r=0;

 printf("INSIRA O PRIMEIRO NUMERO: ");
 scanf("%d", &a);

 printf("INSIRA O SEGUNDO NUMERO: ");
 scanf("%d", &b);

 if (b != 0){
    r = (a/b);
    printf("\nResultado: %d\n", r);
 }else{
    printf("NAO E POSSIVEL DIVIDIR POR ZERO!");
 }



  }
