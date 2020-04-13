#include<stdio.h>
#include<stdlib.h>

/* 13 - Crie um código que receba do usuário um numero float e em
seguida imprima esse número completo, com 3 e com 2 algarismos. */

int main (){

    float num;


    printf("INSIRA UM NUMERO FLOAT: ");
    scanf("%f", &num);

    printf("Completo: %f\n", num);
    printf("Tres algarismos: %.3f\n", num);
    printf("Dois algarismos: %.2f\n", num);




}


