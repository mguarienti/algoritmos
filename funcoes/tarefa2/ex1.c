#include<stdio.h>

/* Escreva um programa no qual são lidos valores para um vetor de 5000 elementos inteiros. A seguir, o vetor 
deve ser passado como parâmetro para uma função, onde é contado o número de ocorrências de pares adjacentes 
ordenados de forma crescente. Isto significa que todos os pares adjacentes devem ser testados, e deve ser 
contado o número de vezes em que o valor de um elemento é menor que o do seu sucessor.*/

int check_adjacent_pairs(int vector[]){

    int i, cont=0, cont2=0;

    for (i=0; i<25; i++){
        if(vector[i+1] == vector[i] + 1){
            cont++;
        }
    }
    for (i=0; i<24; i++){
        if(vector[i] < vector[i+1]){
            cont2++;
            /* Debug
            printf("i = %d\n", vector[i]);
            printf("i+1 = %d\n", vector[i+1]);
            printf("cont2 = %d\n\n", cont2); */
        }
    }
    printf("\n--> Existem %d pares adjacentes ordenados de forma crescente!\n", cont);
    printf("--> O numero de vezes em que o valor de um elemento %c menor que o do seu sucessor %c %d!", 130, 130, cont2);
    printf("\n\n");
}

int main() {
    
    int vet[25]={1,7,8,4,21,12,-4,-5,19,47,98,114,115,32,10,25,8,77,78,241,15,29,30,44};
    check_adjacent_pairs(vet);
    
}