/* Escreva um programa que leia um vetor de 1001 elementos, todos diferentes entre si, e
passe este vetor para uma fun��o. A fun��o deve encontrar, SEM ALTERAR AS POSI��ES
DOS ELEMENTOS DO VETOR, aquele elemento entre os 1001 que possui exatamente 500
maiores que ele e 500 menores que ele. A fun��o deve retornar a posi��o do elemento no
vetor, e dentro da fun��o main devem ser exibidos esta posi��o e o valor do elemento. */
#include<stdio.h>

#define TAM 1001

func() {

 /* essa funcao � a que voce deve fazer para encontrar o
             n-esimo maior elemento do vetor!!!!!! USE A SUA!!!!!*/

  }

int funcao(int v[]) {
  int x;
  x = func(v, 501);
  return x;
  }

main() {
  int vet[TAM];
  int pos;
  printf("Digite o vetor: ");
  for (pos = 0; pos < TAM; pos++)
    scanf("%d", &vet[pos]);
  pos = funcao(vet);
  printf("O elemento media vale %d e esta na posicao %d.", vet[pos], pos);
  }
