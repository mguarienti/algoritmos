#include <stdio.h>

/* Dado um valor n informado pelo usuário, exiba a tabuada desse numero usando FOR */

int main() {
		
	int cont=1, val=0;
	printf("INFORME UM VALOR PARA CALCULAR A TABUADA: ");
	scanf("%d", &val);
	printf("\n");

	for (  ;cont<=10;cont++){
		printf("%d x %d = %d\n", val, cont, val*cont);
	}
}
