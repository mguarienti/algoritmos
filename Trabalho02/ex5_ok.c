# include <stdio.h>
# include <string.h>

/* 5) Fazer um programa em "C" que lê um string qualquer de no máximo 60 caracteres e imprime:
- Quantos caracteres tem o string;
- Quantos caracteres são de pontuação;
- Quantos caracteres são números;
- Quantos caracteres são minúsculas.*/

main (){

    int pontos=0, i, j, t=0;
    int numeros=0;
    int minusculas=0;

	char str1[60];
	char str2[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    printf("-> Insira uma string:\n");
	fgets(str1,60,stdin);

	t = strlen(str1)-1;
	printf("\n\n --> A string tem %d caracteres no total;", t);

    /*
    if (strchr(str1, '.')){
        pontos++;
    }
    if (strchr(str1, ',')){
        pontos++;
    }
    if (strchr(str1, ';')){
        pontos++;
    }
    if (strchr(str1, '!')){
        pontos++;
    }
    if (strchr(str1, '?')){
       pontos++;
    }
    */

    for(j=0; j<t; j++){
        if ((str1[j] == '.') || (str1[j] == ',') || (str1[j] == ';') || (str1[j] == '!') || (str1[j] == '?')){
            pontos++;
        }
    }

    printf("\n --> A string tem %d caracteres de pontuação;", pontos);

    /*
    if (strchr(str1, '1')){
        numeros++;
    }
    if (strchr(str1, '2')){
        numeros++;
    }
    if (strchr(str1, '3')){
        numeros++;
    }
    if (strchr(str1, '4')){
        numeros++;
    }
    if (strchr(str1, '5')){
       numeros++;
    }
    if (strchr(str1, '6')){
        numeros++;
    }
    if (strchr(str1, '7')){
        numeros++;
    }
    if (strchr(str1, '8')){
        numeros++;
    }
    if (strchr(str1, '9')){
        numeros++;
    }
    if (strchr(str1, '0')){
       numeros++;
    }
    */

    for(j=0; j<t; j++){
        if ((str1[j] == '0') || (str1[j] == '1') || (str1[j] == '2') || (str1[j] == '3') || (str1[j] == '4')){
            numeros++;
        }
        if ((str1[j] == '5') || (str1[j] == '6') || (str1[j] == '7') || (str1[j] == '8') || (str1[j] == '9')){
            numeros++;
        }
    }
    printf("\n --> A string tem %d caracteres numericos;", numeros);


   for (j=0; j<t; j++){ //laço percorre a string digitada
        for(i=0; i<26; i++){
            if(str1[j] == str2[i]){ //compara a letra da posição j com o alfabeto minusculo
                minusculas++; //incrementa se for minuscula
            }
        }
    }

    printf("\n --> A string tem %d caracteres minusculos;\n\n", minusculas);
}

