#include<stdio.h>

/* Escreva um programa no qual são lidos valores para um vetor de 5000 elementos inteiros. A seguir, o vetor 
deve ser passado como parâmetro para uma função, onde é contado o número de ocorrências de pares adjacentes 
ordenados de forma crescente. Isto significa que todos os pares adjacentes devem ser testados, e deve ser 
contado o número de vezes em que o valor de um elemento é menor que o do seu sucessor.*/

int check_adjacent_pairs(int vector[]){

    int i, cont=0;

    for (i=0; i<24; i++){
        if(vector[i] < vector[i+1]){
            cont++;
        }
    }
    return cont; //Prof., como falamos no e-mail, removi a parte desnecessária e retornei o valor para main como orientado!
}

int main() {
    
    int done;

    int vet[25]={1,7,8,4,21,12,-4,-5,19,47,98,114,115,32,10,25,8,77,78,241,15,29,30,44};
    done = check_adjacent_pairs(vet);
    printf("\n--> O numero de vezes em que o valor de um elemento %c menor que o do seu sucessor (pares adjacentes ordenados de forma crescente) %c %d!", 130, 130, done);
    printf("\n\n");
}