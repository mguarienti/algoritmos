#include<stdio.h>

/* 7. As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 se
forem compradas pelo menos doze. Escreva um programa que leia o número de maçãs
compradas, calcule e escreva o valor total da compra.  */

int main() {

 float a=0;

 printf("Insira o numero de macas a serem compradas: ");
 scanf("%f", &a);

 if (a < 12){
    a = a * 0.30;
    printf("\nAs macas custam R$ 0.30");
    printf("\nO valor total da compra foi de R$ %.2f\n", a);
 }else{
    a = a * 0.25;
    printf("\nAs macas custam R$ 0.25");
    printf("\nO valor total da compra foi de R$ %.2f\n", a);

    }
 }


