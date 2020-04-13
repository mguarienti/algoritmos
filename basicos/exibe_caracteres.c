#include<stdio.h>
#include<stdlib.h>

int main (){


int varInt;
char varChar;
float varFloat;

printf("INSIRA UM INTEIRO: ");
scanf ("%d", &varInt);
printf("\n");
printf("INSIRA UM CARACTERE: ");
scanf ("%c", &varChar);
printf("\n");
printf("INSIRA UM FLOAT: ");
scanf ("%f", &varFloat);

printf("Saida");
printf("O inteiro informado foi: %d\n", varInt);
printf("O caractere informado foi: %c\n", varChar);
printf("O flot informado foi: %f\n", varFloat);
}
