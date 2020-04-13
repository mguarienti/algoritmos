#include<stdio.h>

// VERIFICA SE LETRA É VOGAL OU CONSOANTE

int main() {
  char letra;

  printf("Digite uma letra ");
  scanf("%c", &letra);

  printf("\n");
  printf("%c", letra);

  switch (letra){
    case 'a':
        printf("Vogal");
        break;

    case 'e':
        printf("Vogal");
        break;

    case 'i':
        printf("Vogal");
        break;

    case 'o':
        printf("Vogal");
        break;

    case 'u':
        printf("Vogal");
        break;

    default:
        printf("Consoante");
        break;

    printf("\n");
  }
}
