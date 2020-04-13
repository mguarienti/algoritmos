#include<stdio.h>

// VERIFICA SE LETRA É VOGAL OU CONSOANTE

int main() {
  char letra;
  int aux=0;

  printf("Digite uma letra ");
  scanf("%c", &letra);

  printf("\n");

  if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
    aux = 1;
  }

  switch (aux){
    case 1:
        printf("Vogal");
        break;

    default:
        printf("Consoante");
        break;

    printf("\n");
  }
}
