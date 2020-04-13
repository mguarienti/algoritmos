# include <stdio.h>
# include <string.h>

/* Escreva um programa que funciona como o jogo da forca. O usuário tenta acertar uma palavra
(contida numa variável) usando 5 tentativas. A palavra é mostrada ao usuário com as letras
marcadas com o símbolo '*'. O usuário deve digitar uma letra (sem acentos, til, trema) e caso a
letra esteja correta, o símbolo '*' é substituído pela letra. Se o usuário não montar a palavra até
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
		for (j=0; j<=t; j++){ //laço percorre a string
			if(str2[j] == letra){ //compara a letra da posição j da palavra com a letra digitada
        	str1[j] = letra; // se ok, entao str1 na posição j recebe a letra	
			}	
		}
        printf("\n\n --> [%c][%c][%c][%c][%c][%c]", str1[0], str1[1], str1[2], str1[3], str1[4], str1[5]);
	}
	printf("Voce foi Enforcado!");
}	
