#include <stdio.h>

	int main (){
		
		int i, vet[11]={10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
		
		for (i=0; i<11; i++){
			if(vet[i]%2 == 0){
				printf("%d\n", vet[i]);
			}
		}
}
