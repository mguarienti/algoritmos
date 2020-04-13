# include <stdio.h>
# include <string.h>

/*Escreva um código C que receba do usuário duas 
strings e exiba na tela qual delas é a maior*/

int main (){
	
	int t;
	char str1[20], str2[20];
	
	printf("-> Insira uma string (1):\n");
	gets(str1);
	printf("\n-> Insira outra string (2):\n");
	gets(str2);
	t = strncmp(str1, str2, 20); //erro aqui
	printf("\nT vale = %d\n", t);
	if(t==0){
		printf("\n---\nAs strings sao iguais\n");
	}else{
		if(t<0){
			printf("\n---\nA string 1 e MENOR que string 2.\n");
		}else{
			printf("\n---\nA string 1 e MAIOR que string 2.\n");
		}	
	}	
}
