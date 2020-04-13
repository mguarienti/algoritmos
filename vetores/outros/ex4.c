#include <stdio.h>

	int main (){
		
		int i, vet1[5], vet2[5];
		
		printf("INSIRA 5 VALORES:\n");
		
		for (i=0; i<5; i++){
			scanf("%d", &vet1[i]);
			vet2[i] = vet1[i] * vet1[i] * vet1[i];
		}
		for (i=0; i<5; i++){
			printf("Vet2 pos %d = %d\n", i, vet2[i]);
		}	
}
