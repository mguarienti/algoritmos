# include <stdio.h>

/*1 - Crie uma estrutura para armazenar 5 inteiros:
	 1.1 - Armazene valores aleatórios em cada membro da estrutura;
	 1.2 - Exiba na tela cada valor. */

int main (){
	struct armazena {
		int a;
		int b;
		int c;
		int d;
		int e;
	};
	
	
	printf ("INFORME 5 VALORES INTEIROS:\n"); //1.1
	struct armazena log;
	scanf("%d", &log.a);
	scanf("%d", &log.b);
	scanf("%d", &log.c);
	scanf("%d", &log.d);
	scanf("%d", &log.e);
	
	printf ("\n\nOS VALORES ARMAZENADOS FORAM: \n"); //1.2
	printf ("[a] = %d\n[b] = %d\n[c] = %d\n[d] = %d\n[e] = %d", log.a, log.b, log.c, log.d, log.e);
}
