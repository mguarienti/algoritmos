/* Escreva programa que leia um vetor de 500 elementos inteiros, al�m de dois valores inteiros
M e N menores que 500. A seguir, o programa deve chamar uma fun��o para somar M elementos a
partir do N-�simo (inclusive). Se entre a posi��o N e o final do vetor n�o houver M elementos,
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
