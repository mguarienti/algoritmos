#include<stdio.h>

/* 11. Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e diga se
a data é válida ou não. Caso não seja, diga o motivo. Suponha que todos os meses tem 31
dias e que estejamos no ano de 2013. */

int main() {

    int d, m, a;


    printf("INSIRA O DIA DO SEU NASCIMENTO: ");
    scanf("%d", &d);

    printf("INSIRA O MES DO SEU NASCIMENTO: ");
    scanf("%d", &m);

    printf("INSIRA O ANO DO SEU NASCIMENTO: ");
    scanf("%d", &a);


    if (d >= 1 && d <= 31){
        if (m >= 1 && m <= 12){
            if (a <= 2013){
                printf("\nA data de nascimento e VALIDA!\n");
            }else{
                printf("\nANO INVALIDO!\n");
            }
        }else{
            printf("\nMES INVALIDO!\n");
        }
    }else{
        printf("\nDIA INVALIDO!\n");
    }
}
