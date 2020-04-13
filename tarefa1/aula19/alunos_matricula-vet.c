# include <stdio.h>
# include <stdlib.h>

/* Vetor de estruturas alunos:
	-> Código 1 - vetor básico de estruturas de alunos, com preenchimento dinâmico;
	-> Código 2 - crie uma estrutura chamada notas[ nota , nota2, nota3];
	-> Exiba os dados dos alunos preenchidos, no vetor;
	-> A estruturas de alunos, conterá matricula e notas (estrutura aninhada) com preenchimento dinâmico;
	-> Exiba os dados dos alunos preenchidos, no vetor; */

int main (){
	
	int i, cont=1;
	
	struct table_notas {
		float nota;
		float nota2;
		float nota3;	
	};
	
	struct table_aluno {
		int MTR;
		float final_md;
		struct table_notas notas;
	};
	
	struct table_aluno log[5];
	
	for (i=0; i<5; i++){
		printf ("\n--------------------------------------------------------------------------------\n");
		printf ("# CONTROLE DE NOTAS DE ALUNOS #");
		printf ("\n--------------------------------------------------------------------------------\n");
		printf ("\nINFORME A MATRICULA %d:\n  ->", cont);
		scanf("%d", &log[i].MTR);
		
		printf ("\nINFORME A NOTA 1:\n  ->");
		scanf("%f", &log[i].notas.nota);
	
		printf ("INFORME A NOTA 2:\n  ->");
		scanf("%f", &log[i].notas.nota2);
	
		printf ("INFORME A NOTA 3:\n  ->");
		scanf("%f", &log[i].notas.nota3);
		
		log[i].final_md = ((log[i].notas.nota + log[i].notas.nota2 + log[i].notas.nota3) / 3);
		
		printf ("\n\n----------------------------------------\n");
		printf ("          RESUMO DO ALUNO %d:\n", log[i].MTR);
		printf ("-> NOTA 1 = %.3f\n", log[i].notas.nota);
		printf ("-> NOTA 2 = %.3f\n", log[i].notas.nota2);
		printf ("-> NOTA 3 = %.3f\n", log[i].notas.nota3);
		printf ("-> MEDIA FINAL = %.3f", log[i].final_md);
		printf ("\n----------------------------------------\n");
		printf ("\n\n--------------------------------------------------------------------------------\n");
	
		cont++;
		printf ("\n* Pressione 'Enter' para continuar...");
		getch();
		system("cls");
	}

}
