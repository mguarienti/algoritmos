# include <stdio.h>

/* Crie uma função que troque o valor de dois números inteiros
passados por parâmetro */

int troca (int a, int b){
	int aux;
	aux = a;
	a = b;
	b = aux;
	printf("\n\nOS RESULTADOS TROCADOS SAO:\n\n");
	printf("%d\n", a);
	printf("%d", b);
	return 0;
}


int main (){
	int x, y, res;
	printf("Insira o Primeiro Valor: ");
	scanf("%d", &x);
	printf("\nInsira o Segundo Valor: ");
	scanf("%d", &y);
	troca(x,y);
}
