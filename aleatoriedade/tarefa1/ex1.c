#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* 1. Escreva um programa que preencha um vetor de 50 elementos, de modo que o valor da posição i 
seja igual a i. A seguir, passe o vetor para uma função onde ele é embaralhado, ou seja, os valores 
são redistribuídos (pseudo)aleatoriamente dentro do vetor. O método de embaralhamento não deve ter 
bias, ou seja, todas as permutações possíveis devem ser igualmente prováveis.*/

int vect_KFY_Shuffle(int vet[]){
    
    int i, rand_pos, temp;
    
    srand((unsigned)time(NULL));
    for (i=49; i>0; i--){
        rand_pos = rand() % (i+1);
        temp = vet[i];
        vet[i] = vet[rand_pos];
        vet[rand_pos] = temp;
    }
    printf("--> Vetor embaralhado, sem bias:\n\n");
    for(i=0; i<50; i++){
        printf("[Posicao %d] = %d\n", i, vet[i]);
    }
}

int main() {

    int i, vec[50];

    for(i=0; i<50; i++){
        vec[i] = i;
    }
    vect_KFY_Shuffle(vec);
  }
