#include<stdio.h>

/* 5. Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma
mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês
em que ela nasceu).

Entre 16 e 17 ou +=65 - Facultativo */

int main() {

 int a=0;

 printf("INSIRA SUA IDADE: ");
 scanf("%d", &a);

 if (a < 16){
    printf("\nVoto NAO PERMITIDO!\n");
 }else{
    if ((a >= 16 && a <=17) || a >= 65){
        printf("\nVoto FACULTATIVO!\n");
    }else{
        printf("\nVoto OBRIGATORIO!\n");
    }
    }
 }


