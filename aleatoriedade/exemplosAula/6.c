/* SHUFFLE EM UM VETOR - SIMPLES, RÁPIDO, E INCORRETO!! */
/* ESSE METODO GERA ALGUMAS PERMUTACOES MAIS QUE OUTRAS */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main() {
  int r, i, a;
  int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  for (i= 0; i < 10; i++) {
    printf("%d ", vet[i]);
    }
  srand((unsigned)time(NULL));
  for (i= 0; i < 10; i++) {
    r = rand() % 10;
    a = vet[i];
    vet[i] = vet[r];
    vet[r] = a;
    }
  printf("\nEmbaralhado\n");
  for (i= 0; i < 10; i++) {
    printf("%d ", vet[i]);
    }
  }


