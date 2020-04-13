#include <stdio.h>

/* Escrever um programa que chama uma função que retorna a soma dos números inteiros que existem entre os números 
n1 e n2 (inclusive ambos) passados como parâmetros. A função deve funcionar inclusive se o valor de n2 for menor 
que n1. Ler n1 e n2 na função main e retornar para a main o valor resultante.

Exemplo:

n = somaintervalo(3, 6); ----> n recebe 18  (3 + 4 + 5 + 6)
n = somaintervalo(5,5); ----> n recebe 10 (5 + 5)
n = somaintervalo(-2,3); ----> n recebe 3 (-2 + -1 + 0 + 1 + 2 + 3)
n = somaintervalo(4, 0); ----> n recebe 10 (4 + 3 + 2 + 1 + 0) */

int sum_interval(int get1, int get2){
    
    int sum, cont, aux;
    
    if (get1 == get2){
        sum = get1 + get2;
    }else{
        if (get1 < get2){
            cont = get1 + 1;
            sum = get1;

            while (cont <= get2){
                sum = sum + cont;
                cont++;
            }
        }else{
            cont = get1 - 1;
            sum = get1;

            while (cont >= get2){
                sum = sum + cont;
                cont--;
            }
        } 
    }
    return sum;
}

int main() {

    int value1, value2, done;

    printf("\nInforme um valor inteiro: ");
    scanf("%d", &value1);
    printf("\nInforme outro valor inteiro: ");
    scanf("%d", &value2);
    done = sum_interval(value1, value2);
    printf("\n\nA soma do intervalo entre %d e %d eh: %d;\n\n", value1, value2, done);

}