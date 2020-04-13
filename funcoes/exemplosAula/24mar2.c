/* Escreva programa que leia um vetor de 500 elementos inteiros, além de dois valores inteiros
M e N menores que 500. A seguir, o programa deve chamar uma função para somar M elementos a
partir do N-ésimo (inclusive). Se entre a posição N e o final do vetor não houver M elementos,
devem ser somados os que existem. */

#include <stdio.h>

#define TAM 500

int soma(int a, int b, int v[]) {
  int i, s=0;

  a = a+b > TAM ? TAM : a+b;

  for (i=b; i < a; i++) {
    s = s + v[i];
    }
  return s;
  }

main() {
  int i, vet[TAM];
  int m, n;
  printf("Digite o vetor: ");
  for(i=0; i<TAM; i++)
    scanf ("%d", &vet[i]);
  printf("Digite m e n: ");
  scanf("%d", &m);
  scanf("%d", &n);
  printf("O Somatorio e %d.", soma(m, n, vet));
  }
