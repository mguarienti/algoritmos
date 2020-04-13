#include <stdio.h>

/* Dado um valor n informado pelo usuário, exiba uma contagem regressiva usando DO WHILE */

int main() {
		
	int cont=0;
	printf("INFORME UM VALOR PARA n: ");
	scanf("%d", &cont);
	printf("\n");

	do {
		printf("%d\n", cont);
		cont--;
	}while(cont>=0);

}
