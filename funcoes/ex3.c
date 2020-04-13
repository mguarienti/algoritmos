# include <stdio.h>

/* Crie uma função que mostre a soma e subtração de dois números
inteiros passados por parâmetro.*/

int soma_subt(int a, int b){
	int s;
	printf("----------------------------------");
	s = a + b;
	printf("\n\nA SOMA VALE = %d", s);
	s = a - b;
	printf("\n\nA SUBTRACAO VALE = %d", s);
	
}

int main (){
	int x, y, res;
	printf("Insira o Primeiro Valor: ");
	scanf("%d", &x);
	printf("\nInsira o Segundo Valor: ");
	scanf("%d", &y);
	soma_subt(x,y);
}
