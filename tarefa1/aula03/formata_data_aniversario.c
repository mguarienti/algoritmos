#include<stdio.h>
#include<stdlib.h>

/* 14- crie um programa que receba do usu�rio sua data de anivers�rio,
em formato decimal (DD) (MM) (AAAA) e posteriormente exiba em tela
seguindo a seguinte formata��o DD/MM/AAAA */

int main (){

    int dia;
    int mes;
    int ano;

    printf("INSIRA O DIA DO SEU ANIVERSARIO: ");
    scanf("%d", &dia);

    printf("INSIRA O MES DO SEU ANIVERSARIO: ");
    scanf("%d", &mes);

    printf("INSIRA O ANO DO SEU ANIVERSARIO: ");
    scanf("%d", &ano);

    printf("\n");
    printf("SEU ANIVERSARIO E EM %d/%d/%d", dia, mes, ano);

}



