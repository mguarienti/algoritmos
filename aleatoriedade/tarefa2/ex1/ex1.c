#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* 1. Escreva um programa que leia as probabilidades que 10 indivíduos têm de serem selecionados em um processo. 
Para ilustrar a ideia, imagine, por exemplo, uma rifa em que um indivíduo comprou 22% dos números, outro comprou 
8%, e assim por diante, de modo que os 100% fiquem divididos entre os 10. Os indivíduos são numerados de 0 a 9, 
conforme o índice no vetor da posição que contém cada probabilidade. Escreva um programa que faça o sorteio de um 
indivíduo, de modo que as probabilidades sejam respeitadas.*/

int main (){

    int i, j, aux, randNum;

    int vec_percent[10]={22, 8, 15, 18, 2, 8, 5, 2, 13, 7};
    int vec_accum[10];
    
    //faz o cumulativo e guarda no segundo vetor
    for (i=0; i<10; i++){ 
        if(i == 0){
            vec_accum[i] = vec_percent[i];
        }else{
            vec_accum[i] = vec_accum[i-1] + vec_percent[i];
        }
    }

    // sorteio
    srand((unsigned)time(NULL));
    randNum = rand()%100;

    //achar o primeiro valor maior que ele (winner)
    for (i=0; i<10; i++){ 
        if(vec_accum[i] > randNum){
            printf("\nO sorteado foi o numero %d e o vencendor esta na posicao %d\n", randNum, i);
            i = 10;
        }
    }
}

