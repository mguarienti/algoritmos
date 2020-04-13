#include<stdio.h>

/* 13. Utilizando vetor, escreva um código que receba 12 valores inteiros do teclado, calcule a soma de ambos
e calcule a porcentagem em relação a cada posição. Exiba o resultado. */

main() {

  int cont, s=0, vet[12], pct;
  
  printf("INSIRA VALORES NO VETOR DE 12 POSICOES:\n");
  
  for (cont=0; cont<=11; cont++)   //Laço para capturar e armazenar os valores informados 
    {
       scanf("%d", &vet[cont]);
    }
  
  for (cont=0; cont<=11; cont++){
    s = s + vet[cont]; // soma os valores e add em 's'
  }
  
  printf("\nA soma do vetor e %d\n", s);
  
  for (cont=0; cont<=11; cont++){ 
    pct = (100 * vet[cont]) / s; //calcula a porcentagem de cada posição no vetor
    printf("O valor %d representa %d%% de %d\n", vet[cont], pct, s);
  }
}