#include<stdio.h>

int main() {
  float nota1;
  float nota2;
  float media;

  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("\n");

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  printf("\n");

  printf("As notas digitadas foram:\n");
  printf("Nota 1: %.2f\n", nota1);
  printf("Nota 2: %.2f\n", nota2);

  printf("\n");

  //Calcula media
  media = ((nota1+nota2)/2);

  printf("A media do aluno e: %.2f\n", media);

  //Indica aprovação(>=7), reprovação (<3), ou qualquer outra nota em exame

  if (media >= 7.00){
    printf("\n");
    printf("#####################################\n");
    printf("O aluno esta APROVADO - Media: %.2f\n", media);
    printf("#####################################");
    printf("\n");
  }else{
      if (media >=3.00 && media < 7.00){
      printf("\n");
      printf("#####################################\n");
      printf("O aluno esta EM EXAME - Media: %.2f\n", media);
      printf("#####################################");
      printf("\n");
      }else{
          printf("\n");
          printf("#####################################\n");
          printf("O aluno esta REPROVADO - Media: %.2f\n", media);
          printf("#####################################");
          printf("\n");
      }

  }

  }
