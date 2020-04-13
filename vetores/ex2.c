#include <stdio.h>

/* Escreva um programa que receba 12 valores, escritos pelo usuário. Esses valores
devem ser armazenados em dois vetores, ou seja, dois elementos em cada vetor. Por
fim, faça a soma desses dois vetores, elemento a elemento, e salve o resultado de
cada soma em um terceiro vetor. */

	int main (){
	
		int i, vet1[6], vet2[6], vet3[6];
		
		printf("Insira 6 valores inteiros para preenchimento do PRIMEIRO vetor:\n");
		
		for (i=0; i<6; i++){ //armazena no primeiro vetor
			scanf("%d", &vet1[i]);
		}
		
		printf("\nInsira 6 valores inteiros para preenchimento do SEGUNDO vetor:\n");
		
		for (i=0; i<6; i++){ //armazena no segundo vetor
			scanf("%d", &vet2[i]);
		}
		
		printf("\nA soma dos valores foi a seguinte: \n");	
			
		for (i=0; i<6; i++){ // percorre terceiro vetor guardando a soma dos anteriores
			vet3[i] = vet1[i] + vet2[i];
			printf("%d + %d = %d\n", vet1[i], vet2[i], vet3[i]);
		}	
}
