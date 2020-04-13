#include<stdio.h>

// VERIFICA QUANTOS DIAS TEM O MES

int main() {
  int mes;

  printf("Digite um numero respectivo a um mes: ");
  scanf("%d", &mes);

  printf("\n");

  switch (mes){
    case 1:
        printf("Janeiro possui 31 dias");
        break;
    case 2:
        printf("Fevereiro possui 28 dias");
        break;
    case 3:
        printf("Marco possui 31 dias");
        break;
    case 4:
        printf("Abril possui 30 dias");
        break;
    case 5:
        printf("Maio possui 31 dias");
        break;
    case 6:
        printf("Junho possui 30 dias");
        break;
    case 7:
        printf("Julho possui 31 dias");
        break;
    case 8:
        printf("Agosto possui 31 dias");
        break;
    case 9:
        printf("Setembro possui 30 dias");
        break;
    case 10:
        printf("Outubro possui 31 dias");
        break;
    case 11:
        printf("Novembro possui 30 dias");
        break;
    case 12:
        printf("Dezembro possui 31 dias");
        break;
    default:
        printf("O valor informado e invalido!");
        break;

    printf("\n");
  }
}
