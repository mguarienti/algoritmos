# include <stdio.h>

/* Imprime todos os valores entre X e Y */

int main () {
	
	int x=0, y=0, aux=0;
	
	printf("INSIRA O PRIMEIRO VALOR: ");
	scanf("%d", &x);
	
	printf("\nINSIRA O SEGUNDO VALOR: ");
	scanf("%d", &y);
	
	if (x > y){
		printf("O PRIMEIRO VALOR E MAIOR QUE O PRIMEIRO. OS VALORES FORAM INVERTIDOS.");
		y = aux;
		x = y;
		aux = x;  // verificar erro!!
	}
	
	aux = x;

	while (aux >= x && aux <= y){
		printf("\n%d", aux);
		aux++;
	}
}  

