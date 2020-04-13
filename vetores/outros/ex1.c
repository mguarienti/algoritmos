#include <stdio.h>

	int main (){
		
		int i, vet[10], cont=2;
		
		for (i=0; i<10;){
			if (cont%2 == 0){
				vet[i]=cont;
				i++;
			}
			cont++;
		}
		for (i=0; i<10; i++){
			printf ("vet na pos %d = %d\n", i, vet[i]);
		}
}
