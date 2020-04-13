#include <stdio.h>

	int main (){
		
		int i, vet[6]={-1, 7, 8, -30, -4, 0};
		
		for (i=0; i<6; i++){
			if(vet[i] < 0){
				printf("%d\n", vet[i]);
			}
		}
}
