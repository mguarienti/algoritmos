#include <stdio.h>

	int main (){
		
		int i, vet1[6]={1,2,3,4,5,6}, vet2[6];
		
		for (i=0; i<6; i++){
			vet2[i] = vet1[i];
		}
		for (i=0; i<6; i++){
			printf("Vet 2 pos %d = %d\n", i, vet2[i]);
		}
}
