/* Escreva um programa que leia um vetor de 1001 elementos, todos diferentes entre si, e
passe este vetor para uma função. A função deve encontrar, SEM ALTERAR AS POSIÇÕES
DOS ELEMENTOS DO VETOR, aquele elemento entre os 1001 que possui exatamente 500
maiores que ele e 500 menores que ele. A função deve retornar a posição do elemento no
vetor, e dentro da função main devem ser exibidos esta posição e o valor do elemento. */
#include<stdio.h>

#define TAM 1001

func() {

 /* essa funcao é a que voce deve fazer para encontrar o
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
