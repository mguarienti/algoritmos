# include <stdio.h>
# include <string.h>

/*Escreva um código que faça a cópia de uma string do usuário e
exiba qual o tamanho dessa string*/

int main (){
	
	int t;
	char str1[20], str2[20];
	
	printf("Insira uma string:\n");
	gets(str1);
	strncpy(str2, str1, 20); //faz uma cópia para 'str2'
	str2[20]='\0';
	//printf("Saida de str2 = %s", str2);
	t = strlen(str2); //verifica tamanho da cópia
	printf("\nA string tem %d caracteres.\n", t);
	
	
}
