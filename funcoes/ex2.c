# include <stdio.h>

/* Crie uma função que encontre o maior valor de dois números
inteiros passados por parâmetro. */

int maior_numero(int a, int b){
	if(a>b){
		return a;	
	}else{
		return b;
	}
}

int main (){
	int x, y, res;
	printf("Insira o Primeiro Valor: ");
	scanf("%d", &x);
	printf("\nInsira o Segundo Valor: ");
	scanf("%d", &y);
	res = maior_numero(x,y);
	printf("\n\nO MAIOR VALOR E = %d", res);
}
