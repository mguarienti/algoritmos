# include <stdio.h>

/* 5 - Com base no exercício 4, crie um vetor de 5 posições para essa estrutura;
	Utilixe 'for' para preencher os elementos.*/

int main (){
	
	int i, cont=1;
	
	struct table_aluno {
		int MTR;
		float n1;
		float n2;
		float n3;
		float final_md;
	};
	
	struct table_aluno log[5];
	
	for (i=0; i<5; i++){
		printf ("\nINFORME A MATRICULA %d:\n  ->", cont);
		scanf("%d", &log[i].MTR);
		
		printf ("\nINFORME A NOTA 1:\n  ->");
		scanf("%f", &log[i].n1);
	
		printf ("INFORME A NOTA 2:\n  ->");
		scanf("%f", &log[i].n2);
	
		printf ("INFORME A NOTA 3:\n  ->");
		scanf("%f", &log[i].n3);
		
		log[i].final_md = ((log[i].n1 + log[i].n2 + log[i].n3) / 3);

		printf ("\n\n----------------------------------------\n");
		printf ("A MEDIA DO ALUNO %d E:\n", log[i].MTR);
		printf ("--> %.3f", log[i].final_md);
		printf ("\n----------------------------------------\n\n");
		
		cont++;
	}

}
