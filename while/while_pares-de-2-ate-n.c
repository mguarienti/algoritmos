# include <stdio.h>

/* Soma de todos os n�meros pares de 2 at� n */

int main () {
	
	int aux=2, n, x=0;
	
	printf("INSIRA O VALOR: ");
	scanf("%d", &n);
	
	while (aux <= n) {
		if (aux % 2 == 0){
			x=x+aux;
		}
		aux++;
	}
	printf("%d", x);
}  

