#include <stdio.h>

/* Dado um valor n informado pelo usuário, exiba uma contagem regressiva usando FOR */

int main() {
		
	int cont=0;
	printf("INFORME UM VALOR PARA n: ");
	scanf("%d", &cont);
	printf("\n");

	for (    ;cont>=0;cont--){
		printf("%d\n", cont);
	}
}
