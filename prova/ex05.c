#include<stdio.h>

/* 5- Utilizando while, crie um código em C que peça ao usuário para informar um valor “a” e
um valor “n”. Imprimir a soma dos “n” números a partir de “a” (inclusive). Testar se valor de
“x” for negativo ou zero, exiba uma mensagem de erro ao usuário. */


int main (){

	int a=0, n=0, cont=2, t=0;

	printf("Informe um valor A : ");
	scanf("%d", &a);

	printf("Informe outro valor N: ");
	scanf("%d", &n);

	if (n <= 0){
		printf("\nERRO\n");
	}else{
        t = a + (a+1); //soma de primeiro nível (soma 'a' com seu incremento);
		while (cont <= n){ // executa o laço com contador valendo 2 pois a primeira operação já foi executada acima (soma de primeiro nível);
			t = t + (a+cont); // soma de segundo nível, pega o total da soma de primeiro nível e soma com os incrementos de 'a';
			//printf("Soma: %d + (%d+%d) = %d\n", t, a, cont, t); // descomentar para ver o traceback;
			cont++;
		}
		printf("\nA soma e %d\n", t);
	}
}
