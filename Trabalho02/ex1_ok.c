# include <stdio.h>
# include <string.h>

/* Faça um programa que lê uma string e retorna a string invertida. */

main (){

    int j,t ;
	char str1[20];

	printf("-> Insira uma string:\n");
	fgets(str1, 20, stdin); //Utilizado fgets() pois gets() estava dando erro no CB no Debian
	t = strlen(str1); // calcula o tamanho da string e armazena em t

	printf ("-> String Invertida:");
	for (j=t; j>=0; j--){ //laço percorre a string de traz pra frente printando a posição 'j'
        printf ("%c",str1[j]);
	}
}

