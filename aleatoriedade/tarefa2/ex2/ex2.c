#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* 2. Escreva um programa que leia as notas de 10 indivíduos. Quanto melhor a nota, mais apto está o indivíduo 
para uma certa tarefa. A seguir, o programa deve ler um valor n (menor que 10) e sortear n indivíduos diferentes, 
e mostrar na tela a nota do melhor avaliado dentre os sorteados.*/

int main (){

    int i, size, randNum, temp;
    int vec_score[10]={41, 83, 12, 38, 94, 55, 28, 71, 63, 99}; //notas até 100

    printf("--> Informe quantos serao selecionados (menos de 10): ");
    scanf("%d", &size);
    
    if (size >= 10 || size <= 0){
        printf("#ERRO: Valor nao aceito.");
    }else{
      srand((unsigned)time(NULL));
      
      // Embaralha o vetor de notas (método Fisher-Yates Shuffle)
      for(i=9; i>0; i--){                       
        randNum = rand() % (i+1);
        temp = vec_score[i];
        vec_score[i] = vec_score[randNum];
        vec_score[randNum] = temp;
      }
  }

    // Nos 'size' primeiros, seleciona a maior nota e atribui a 'temp' (reaprov. variavel)
    temp = 0;
    for(i=0; i<size; i++){
      if(vec_score[i] > temp){
        temp = vec_score[i];
      }
    }
  
    //-----------------------------------------------------------
    // APENAS UM DETALHAMENTO DO EMBARALHAMENTO, PODE SER IGNORADO PARA EFEITOS DE PERFORMANCE
    printf("\n--> As notas foram embaralhadas da seguinte forma:\n");

    for(i=0; i<10; i++){
      printf("[%d]  ", vec_score[i]);
    }
    //-----------------------------------------------------------

    printf("\n\n--> Assim, os %d primeiros selecionados tiveram as notas:\n", size);

    for(i=0; i<size; i++){
      printf("[%d]  ", vec_score[i]);
    }

    printf("\n\n--> Dentre eles, o mais apto possui nota %d", temp);
}