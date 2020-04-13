#include<stdio.h>

/* Crie um código que receba numeros de usuario e some esses numeros
até que digitado o valor 44. Exibir a soma na tela.*/

main() {
  int a=0, cont=0;
  printf("Digite uma sequencia. Numero 44 para parar: ");
  while(a != 44) {
     cont=cont+a;
     scanf("%d", &a);
	}
  printf("A soma dos valores digitados foi: %d", cont);
}