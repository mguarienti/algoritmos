# include <stdio.h>
# include <string.h>

/* 7) Escrever um programa que receba um nome

OK -Que conte o número de vogais existentes nele.
OK -O programa deverá imprimir o numero total de caracteres do nome
OK? -Quantas vogais
OK - E a respectiva porcentagem das vogais em relação ao total de caracteres.*/

main (){

    int vogais=0, pct=0, t=0, j;
    int numeros=0;


	char str1[60];

    printf("-> Insira uma string:\n");
	fgets(str1,60,stdin);

	t = strlen(str1)-1;
	printf("\n\n --> A string tem %d caracteres no total;", t);



    for(j=0; j<t; j++){
        if ((str1[j] == 'a') || (str1[j] == 'e') || (str1[j] == 'i') || (str1[j] == 'o') || (str1[j] == 'u')){
            vogais++;
        }
    }

    printf("\n --> A string tem %d vogais;", vogais);

    pct = ((vogais * 100)/t);

    printf("\n --> A porcentagem de vogais em relacao ao total de caracteres e de %d%;\n\n", pct);




}
