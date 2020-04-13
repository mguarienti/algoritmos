#include <stdio.h>

	int main (){
		
		int i, vet[6]={12, 6, 31, 19, 7, 21}, t=0;
		
		for (i=0; i<6; i++){
			t = t + vet[i];
		}
			printf("Soma: %d", t);
	}

