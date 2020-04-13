#include<stdio.h>

// CALCULADORA CONDICIONAL

int main() {
  float var1;
  float var2;
  float res;
  int op;

  printf("Digite o primeiro numero para calcular: ");
  scanf("%f", &var1);
  printf("\n");


  printf("Digite 1 para soma, 2 para subtracao, 3 para multiplicacao e 4 para divisao: ");
  scanf("%d", &op);
  printf("\n");


  printf("Digite o segundo numero para calcular: ");
  scanf("%f", &var2);
  printf("\n");


  switch (op){
    case 1:
        res = var1 + var2;
        printf("O resultado de %f + %f e %f\n", var1, var2, res);
        break;
    case 2:
        res = var1 - var2;
        printf("O resultado de %f - %f e %f\n", var1, var2, res);
        break;
    case 3:
        res = var1 * var2;
        printf("O resultado de %f * %f e %f\n", var1, var2, res);
        break;
    case 4:
        res = var1 / var2;
        printf("O resultado de %f / %f e %f\n", var1, var2, res);
        break;
    default:
        printf("ERRO\n");
        break;

    printf("\n");
    printf("\n");
  }
}
