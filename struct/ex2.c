# include <stdio.h>

/*2 - Crie uma estrutura para armazenar 5 numeros floats:
	 2.1 - Armazene valores aleatórios em cada um dos membros da estrutura;
	 2.2 - Exiba na tela cada valor. */

int main (){
	struct armazena {
		float a;
		float b;
		float c;
		float d;
		float e;
	};
	
	
	printf ("INFORME 5 VALORES FLOAT:\n"); //1.1
	struct armazena log;
	scanf("%f", &log.a);
	scanf("%f", &log.b);
	scanf("%f", &log.c);
	scanf("%f", &log.d);
	scanf("%f", &log.e);
	
	printf ("\n\nOS VALORES ARMAZENADOS FORAM: \n"); //1.2
	printf ("[a] = %.2f\n[b] = %.2f\n[c] = %.2f\n[d] = %.2f\n[e] = %.2f", log.a, log.b, log.c, log.d, log.e);
}
