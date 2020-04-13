#include<stdio.h>

//  VERICA O DIA DA SEMANA

int main() {
  int num;

  printf("Digite um numero para saber o respectivo dia da semana: ");
  scanf("%d", &num);

  printf("\n");bn

  switch (num){
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-Feira");
        break;
    case 3:
        printf("Terca-Feira");
        break;
    case 4:
        printf("Quarta-Feira");
        break;
    case 5:
        printf("Quinta-Feira");
        break;
    case 6:
        printf("Sexta-Feira");
        break;
    case 7:
        printf("Sabado");
        break;
    default:
        printf("O valor informado e invalido!");
        break;

    printf("\n");
  }
}
