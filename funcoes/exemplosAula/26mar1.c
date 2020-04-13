/* Escreva um programa que leia valores para uma matriz 50 x 50 de
 elementos inteiros, além
de outros dois inteiros entre 0 e 49 para as variáveis M e N. O
 programa deve chamar uma
função para somar todos os elementos que estejam em linhas ou (ou
não exclusivo) colunas
cujos índices estejam entre os valores de M e N. Não estabeleça
 ordem de leitura entre M e N,
ou seja, qualquer um deles pode armazenar o maior dos dois
 valores. */
#include<stdio.h>

#define TAM 50

int funcao(int mat[][TAM], int m, int n) {
  int x, s = 0;
  int i, j;
  if (m > n) {
    x = m;
    m = n;
    n = x;
    }
  /* forca bruta - varre TODA a matriz
  for(i = 0; i < TAM; i++)
    for(j = 0; j < TAM; j++)
      if ((i >= m && i <= n) || (j >= m && j <= n))
        s = s + mat[i][j];*/
  /* varrendo apenas elementos que devem ser somados */
  for(i = m; i <= n; i++)
    for(j = 0; j < TAM; j++)
      s = s + mat[i][j];

  for(i = 0; i < m; i++)
    for(j = m; j <= n; j++)
      s = s + mat[i][j];
  for(i = n+1; i < TAM; i++)
    for(j = m; j <= n; j++)
      s = s + mat[i][j];
  /*
  for(i = 0; i < TAM; i = (i < (m-1) || i > n) ? i + 1 : n + 1 )
    for(j = m; j <= n; j++)
      s = s + mat[i][j];
      */
  return s;
  }


main() {
  int mat[TAM][TAM]/* = {  0, 1, 2, 3, 4, 5, 6,
                         2, 3, 4, 5, 6, 7, 8,
                         5, 6, 7, 8, 9, 1, 2,
                         0, 1, 2, 3, 4, 5, 6,
                         2, 3, 4, 5, 6, 7, 8,
                         5, 6, 7, 8, 9, 1, 2,
                         2, 3, 4, 5, 6, 7, 8 }*/;  /* declaracao da matriz - fiz essa inicialização para facilitar os testes */
  int m, n;
  printf("Digite a matriz: ");
  for(m = 0; m < TAM; m++)
    for(n = 0; n < TAM; n++)
      scanf("%d", &mat[m][n]);
  printf("Digite os indices: ");
  scanf("%d", &m);
  scanf("%d", &n);
  printf("O resultado do somatorio e %d.", funcao(mat, m, n));

  }
