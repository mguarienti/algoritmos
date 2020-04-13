# include <stdio.h>
# include <string.h>

/* 6) Fazer um programa em "C" que lê um string contendo palavras separadas por
um espaço em branco cada e as imprime uma abaixo das outras.*/

main (){

    int j, i=0, t, l;
    char str1[90];

	printf("-> Insira uma string:\n");
	fgets(str1,90,stdin); //se tiver problema, trocar por gets()
	t = strlen(str1); // calcula o tamanho da string e armazena em t

    printf("----------------------------------------\n");
	for (j=0; j<t; j++){ //laço percorre a string digitada

        if (str1[j] == ' '){
            printf("\n");
        }else{
            printf("%c", str1[j]);
        }
    }
}

