# include <stdio.h>
# include <string.h>

/*Escreva um c�digo que fa�a a c�pia de uma string do usu�rio e
exiba qual o tamanho dessa string*/

int main (){
	
	int t;
	char str1[20], str2[20];
	
	printf("Insira uma string:\n");
	gets(str1);
	strncpy(str2, str1, 20); //faz uma c�pia para 'str2'
	str2[20]='\0';
	//printf("Saida de str2 = %s", str2);
	t = strlen(str2); //verifica tamanho da c�pia
	printf("\nA string tem %d caracteres.\n", t);
	
	
}
