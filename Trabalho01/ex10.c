#include<stdio.h>

/* 10. Para doar sangue é necessário ter entre 18 e 67 anos. Faça um aplicativo na linguagem C que
pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não. Use alguns dos
operadores lógicos OU (||) e E (&&).  */

int main() {

 int a=0;

 printf("Insira sua idade: ");
 scanf("%d", &a);

 if (a >= 18 && a <= 67){
    printf("\nE permitido doar sangue!\n");
 }else{
    printf("\nNao e permitido doar sangue!\n");

    }
 }




