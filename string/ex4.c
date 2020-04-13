# include <stdio.h>
# include <string.h>

/*Escreva um código C que receba uma strings e verifique se
existe nela o seguinte carácter “ch”*/

int main (){
	
	int t;
	char str1[20];
	
	printf("-> Insira uma string:\n");
	gets(str1);
	if(strchr(str1, 'ch')){ //[Warning] multi-character character constant [-Wmultichar]
		printf("\n---\nEncontrado!\n", t);
	}else{
		printf("\n---\nNao Encontrado!\n", t);
	}
}
