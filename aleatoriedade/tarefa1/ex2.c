#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* 2. Escreva um programa que gere um valor inteiro aleatório, identificado por m, entre 100 e 1000. 
A seguir, deve ser gerado um segundo valor, também de forma aleatória e identificado por n, entre -m/2 
e +m/2. O programa deve ser feito de modo que a função para geração de números aleatórios seja chamada 
apenas duas vezes, uma para gerar m e outra para gerar n. Ao final, os valores de m e n devem ser exibidos 
na tela.*/

int main() {

    int m, n;

    srand((unsigned)time(NULL));
    m = rand()%901+100; //define intervalo entre 100 e 1000
    n = rand()%(m+1)+(-m/2); // define o segundo intevalo, baseado em 'm'
    printf("\nm = %d\n", m);
    printf("O valor de 'n' abaixo deve estar entre %d e %d:\n", (-m/2),(m/2)); //apenas para debug
    printf("n = %d\n", n);
    printf("\n");

/* SUPONDO QUE m=50
    gerado m -> 50;
    gerado n -> entre (-50/2) e (+50/2);
           n -> entre (-25) e (25);
           ou seja, o intervalo contem 51 possibilidades (m+1);
           e deve ser entre (m+1) e (-m/2);
*/

  }
