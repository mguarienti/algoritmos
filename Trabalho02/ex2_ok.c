# include <stdio.h>
# include <string.h>

/* Escreva um programa que lê uma string e retorna uma
mensagem indicando se a string de entrada é uma palíndromo. */
// EM CASO DE ERRO COM 'gets()' usar o https://www.onlinegdb.com/online_c_compiler

main (){

    int j, i=0, t, l;
	char str1[20], str2[20];

	printf("-> Insira uma string:\n");
	gets(str1); //se tiver problema, trocar por fgets()
	t = strlen(str1); // calcula o tamanho da string e armazena em t

	for (j=t-1; j>=0; j--){ //laço percorre a string armazenando os valores em ordem inversa na str2
        str2[i] = str1[j];
        i++;
	}
    str2[i] = 0; // zera valor de i quando sai do laço (remover lixo)
    printf("------------------\n");
    printf("String Original: %s", str1);
    printf("\nString Invertida: %s", str2);
    printf("\n------------------\n");


	l = strncmp(str1, str2, 20); //compara se sntrings são iguais (se sim, então atribui l=1)
	printf("l vale: %d\n", l);

	if(l==0){
		printf("\n---\nE UM PALINDROMO!\n");
	}else{
		printf("\n---\nNAO E UM PALINDROMO!\n");
	}
}
