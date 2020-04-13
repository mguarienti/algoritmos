#include<stdio.h>

/* 15. Faça um programa para ler (do teclado) as idades de um número n de pessoas e imprimir ao
final quantas são maiores de idade. Use a estrutura de repetição do..while para realizar a
leitura das idades. */

int main (){

    int cont=0, aux;

    printf("Insira a idade de algumas pessoas. Utilize um '0' (zero) para parar a leitura:\n");

    do{
        scanf("%d", &aux);
        if (aux >= 18){  // verifica maioridade
            cont++;  // incrementa se for maior
        }
    }while (aux != 0); // sai do laço se identifica a condição de parada

    printf("\nForam contabilizadas %d pessoas maiores de idade!\n", cont);

}

