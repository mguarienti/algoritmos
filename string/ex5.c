# include <stdio.h>
# include <string.h>

/*Escreva um código C que receba duas strings. Se as strings forem iguais 
exiba uma mensagem dizendo “strings iguais”.Caso contrário, concatene as 
duas e exiba na tela o resultado*/

int main (){
	
	int t;
	char str1[20], str2[20];
	
	printf("-> Insira uma string (1):\n");
	gets(str1);
	printf("\n-> Insira outra string (2):\n");
	gets(str2);
	t = strncmp(str1, str2, 20);
	printf("\nT vale = %d\n", t);
	if(t==0){
		printf("\n---\nAs strings sao iguais\n");
	}else{
		strncat(str1, str2, 20);
		printf("%s", str2);
	}	
}
