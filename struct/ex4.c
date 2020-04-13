# include <stdio.h>

/* 4 - Crie uma estrutura para armazenar os dados de um aluno. A estrutura deve conter:
		* Matrícula;
		* Nota 1;
		* Nota 2;
		* Nota 3;
		* Média final;
	 4.1 - Receba do teclado a matrícula, notas e ao final calcule a média e atribua o resultado ao elemento média da struct;
	 4.2 - Exiba o resultado*/

int main (){
	
	struct table_aluno {
		int MTR;
		float n1;
		float n2;
		float n3;
		float final_md
	};
	
	struct table_aluno log;
	
	printf ("INFORME A MATRICULA:\n  ->");
	scanf("%d", &log.MTR);

	printf ("\nINFORME A NOTA 1:\n  ->");
	scanf("%f", &log.n1);
	
	printf ("INFORME A NOTA 2:\n  ->");
	scanf("%f", &log.n2);
	
	printf ("INFORME A NOTA 3:\n  ->");
	scanf("%f", &log.n3);
	
	log.final_md = ((log.n1 + log.n2 + log.n3) / 3);

	printf ("\n\n----------------------------------------\n");
	printf ("A MEDIA DO ALUNO %d E:\n", log.MTR);
	printf ("--> %.3f", log.final_md);
	printf ("\n----------------------------------------\n");
}
