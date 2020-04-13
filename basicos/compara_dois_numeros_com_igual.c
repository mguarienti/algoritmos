#include<stdio.h>

int main() {
  int num1;
  int num2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);

  printf("\n");

  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  if (num1 == num2){
    printf("\n");
    printf("Os numeros sao iguais");
        }else{
            if(num1 > num2){
            printf("\n");
            printf("Numero %d e maior que %d", num1, num2);
            }else{
            printf("\n");
            printf("Numero %d e maior que %d", num2, num1);
            }
            }
}

