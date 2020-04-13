#include <stdio.h>

/* Escreva um código que armazene em um vetor os seguintes elementos: 
(1, 5, 23, 54, 71, -9, 3, 12, 63, -6, -1, 0, 4, -56) e exiba o índice
e o seu respectivo valor:

A) Dos números pares;
B) Dos números negativos;
C) Dos números menores que 10;  */

	int main (){

		int i, vet[14]={1, 5, 23, 54, 71, -9, 3, 12, 63, -6, -1, 0, 4, -56};
	
		printf("Os valores pares sao:\n");
		
		for (i=0; i<14; i++){
			if (vet[i]%2 == 0){
				printf("-> %d, (indice %d)\n", vet[i], i);
			}
		}
		
		printf("\n\nOs valores negativos sao:\n");
		
		for (i=0; i<14; i++){
			if (vet[i] < 0){
				printf("-> %d, (indice %d)\n", vet[i], i);
			}
		}
		
		printf("\n\nOs valores menores que 10 sao:\n");
		
		for (i=0; i<14; i++){
			if (vet[i] < 10){
				printf("-> %d, (indice %d)\n", vet[i], i);
			}
		}	
}	
