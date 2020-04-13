# include <stdio.h>
# include <string.h>

/* Escreva um programa que funciona como o jogo da forca. O usu�rio tenta acertar uma palavra
(contida numa vari�vel) usando 5 tentativas. A palavra � mostrada ao usu�rio com as letras
marcadas com o s�mbolo '*'. O usu�rio deve digitar uma letra (sem acentos, til, trema) e caso a
letra esteja correta, o s�mbolo '*' � substitu�do pela letra. Se o usu�rio n�o montar a palavra at�
a quinta tentativa, o jogo acaba em derrota.*/

main (){

    int j, t, letra, tent=5;

	char str1[6]={'*','*','*','*','*','*'};
	char str2[6]={'a','m','e','i','x','a'}; //palavra resposta

	printf("-> Adivinhe a palavra! :) \n\n");
	printf("\n --> [%c][%c][%c][%c][%c][%c]", str1[0], str1[1], str1[2], str1[3], str1[4], str1[5]);
	t = strlen(str2)-1; // calcula o tamanho da string e armazena em t

	for(tent=5; tent>=1; tent--){
		printf("\n --> Tentativas Restantes: %d", tent);
		printf("\n --> Letra: ");
		scanf("%c", &letra);
		for (j=0; j<=t; j++){ //la�o percorre a string
			if(str2[j] == letra){ //compara a letra da posi��o j da palavra com a letra digitada
        	str1[j] = letra; // se ok, entao str1 na posi��o j recebe a letra	
			}	
		}
        printf("\n\n --> [%c][%c][%c][%c][%c][%c]", str1[0], str1[1], str1[2], str1[3], str1[4], str1[5]);
	}
	printf("Voce foi Enforcado!");
}	
