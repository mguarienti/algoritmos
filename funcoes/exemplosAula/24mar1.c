/*Escrever um programa que lê um valor ponto flutuante x e um valor inteiro y. Os valores
devem ser passados como parâmetros para uma função, de onde é retornado o valor resultante do
arredondamento do valor x, sendo o último algarismo conservado aquele identificado por y.
O arredondamento deve ser feito de acordo com as regras definidas na norma NBR 5891, da ABNT.
Por exemplo:
Se o valor lido (x) é 12.5639
- se a casa informada (y) é 2, deve ser arredondado para 12.5600
- se a casa informada (y) é –1, deve ser arredondado para 10.0000
- se a casa informada (y) é 0, deve ser arredondado para 13.0000
OBS: use a função pow, da math.h, para calcular a potência x = pow(10, 2);*/

#include<stdio.h>
#include<math.h>

float arredondamento (float valor, int posicao) {
  float pot, aux;
  int temp, aux2;
  pot = pow(10, posicao);
  valor = valor * pot;
  temp = valor;
  aux = valor - temp;
  if (temp % 2 == 0) {
    valor = valor - 0.1;
    }
  temp = valor + 0.5;
  valor = temp / pot;
  return valor;
  }

main() {
  float x;
  int y;
  printf("Digite o valor para arredondamento: ");
  scanf("%f", &x);
  printf("Digite a posicao do arredondamento: ");
  scanf ("%d", &y);
  x = arredondamento(x, y);
  printf("O valor arredondado e %f.", x);
  }
