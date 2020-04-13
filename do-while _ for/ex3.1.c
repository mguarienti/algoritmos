#include <stdio.h>

/* Dado um valor n informado pelo usuário, exiba a tabuada desse numero usando DO WHILE */

int main() {
		
	int cont=1, val=0;
	printf("INFORME UM VALOR PARA CALCULAR A TABUADA: ");
	scanf("%d", &val);
	printf("\n");

	do {
		printf("%d x %d = %d\n", val, cont, val*cont);
		cont++;
	}while(cont<=10);
}
