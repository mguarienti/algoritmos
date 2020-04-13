#include<stdio.h>

/* 6. Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A
senha válida é o número 1234. Devem ser impressas as seguintes mensagens: ACESSO
PERMITIDO caso a senha seja válida. ACESSO NEGADO caso a senha seja inválida. */

int main() {

 int a=0;

 printf("INSIRA SUA SENHA: ");
 scanf("%d", &a);

 if (a == 1234){
    printf("\nSenha valida!\n");
 }else{
    printf("\nSenha INVALIDA!\n");
    }
 }


