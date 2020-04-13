# include <stdio.h>
# include <string.h>

/*Escreva um código C que compare as seguinte strings e
retorne se são iguais ou não “Teste” “teste” */

int main (){
	
	char str1[5] = "Teste";
	char str2[5] = "teste"; // Alterar para entrar no outro IFs
	
	if(strstr(str1,str2)){
		printf("Sao IGUAIS");
	}else{
		printf("Sao DIFERENTES");
	}	
}
