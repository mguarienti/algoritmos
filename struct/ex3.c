# include <stdio.h>

/* 3 - Crie duas estruturas para armazenar 3 numeros inteiros em cada estrutura:
	 3.1 - Armazene valores aleatórios em cada um dos membros da estrutura via teclado;
	 3.2 - Faça a soma do membros da estrutura (nas suas respectivas ordens);
	 3.3 - Exiba na tela cada valor resultante. */

int main (){
	
	int s1, s2, s3;
	
	struct armazena_1 {
		int a;
		int b;
		int c;
	};
	
	struct armazena_2 {
		int a;
		int b;
		int c;
	};
	
	printf ("INFORME 3 VALORES INTEIROS PARA STRUCT_1:\n");  //3.1
	struct armazena_1 log_1;
	scanf("%d", &log_1.a);
	scanf("%d", &log_1.b);
	scanf("%d", &log_1.c);
	
	printf ("\nINFORME 3 VALORES INTEIROS PARA STRUCT_2:\n");
	struct armazena_2 log_2;
	scanf("%d", &log_2.a);
	scanf("%d", &log_2.b);
	scanf("%d", &log_2.c);

	s1 = log_1.a + log_2.a; //3.2
	s2 = log_1.b + log_2.b;
	s3 = log_1.c + log_2.c;

	printf ("\n\n----------------------------------------\n");
	printf ("OS VALORES ARMAZENADOS FORAM: \n"); //3.3
	printf ("[S(a)] = %d\n[S(b)] = %d\n[S(c)] = %d", s1, s2, s3);
	printf ("\n----------------------------------------\n");
}
