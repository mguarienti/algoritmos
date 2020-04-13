# include <stdio.h>
# include <string.h>

/* Codifique um programa que recebe uma string e substitui cada letra pela letra seguinte
circularmente (A é substituído por B, ... e Z é substituido por A).*/

main (){

    int j, i=0, t, l;
	char str1[26], str2[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char str3[26];

	printf("-> Insira uma string:\n");
	fgets(str1,26,stdin); //se tiver problema, trocar por fgets()
	t = strlen(str1); // calcula o tamanho da string e armazena em t

	for (j=0; j<t; j++){ //laço percorre a string digitada
        for(i=0; i<26; i++){
            if(str1[j] == str2[i]){ //compara a letra da posição j com o alfabeto
                str3[j] = str2[i+1]; // substitui pela próxima em str3
            }
            if(str1[j] == 'z'){ // 'z' é confirmado separadamente
                str3[j] = 'a'; // e substituido por 'a'
            }
        }
	}

    printf("------------------\n");
    printf("String Original: %s", str1);
    printf("\nString Trocada: %s", str3);
    printf("\n------------------\n");



}
