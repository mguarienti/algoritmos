#include<stdio.h>

/* 3. Escreva um programa para ler 2 valores e escrever o maior deles, trate a situação de
quando os números forem iguais. */

int main() {

 int a=0, b=0;

 printf("INSIRA O PRIMEIRO NUMERO: ");
 scanf("%d", &a);

 printf("INSIRA O SEGUNDO NUMERO: ");
 scanf("%d", &b);

 if (a == b){
    printf("\nOs valores sao IGUAIS!\n");
 }else{
    if (a > b){
        printf("\nO primeiro valor (%d) e MAIOR que o segundo (%d)!\n", a, b);
    }else{
        printf("\nO primeiro valor (%d) e MENOR que o segundo (%d)!\n", a, b);
    }
 }



  }

