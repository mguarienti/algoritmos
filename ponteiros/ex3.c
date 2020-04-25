# include <stdio.h>
# include <string.h>

/* Escreva um programa que leia uma string e uma letra, identificada por ch, e chame uma função na 
qual o conteúdo da string lida, a partir da primeira ocorrência de ch, é copiado para outra string. 
Após o retorno da função, as duas strings devem ser mostradas na tela. Se a letra ch não ocorrer na 
string lida, a string que receberia a cópia deve ficar vazia (receber apenas um caractere ‘\0’).*/

char str1[30];
char str2[30] = {'\0'};

int srt_cpy (){

    char *walker;
    char *cont = str2;

    for (walker = str1; *walker != '\0'; walker++){  // percorre a string str1;
        if(*walker == 'c' && *(walker+1) == 'h'){ // checa se o valor contido em walker e o seu sucessor sao 'c' e 'h', respectivamente;
            for (;*walker != '\0'; walker++){ // se forem, entao copia os valores para a nova string até achar um '\0';
                *cont = *walker;
                cont++;
            }
            break;
        }
    }
    return 0;
}

int main (){

    printf("--> Insira uma string:\n");
	gets(str1);

    if (strlen(str1) > 30){ // verifica se a string está no limite alocado
        printf("\n#ERRO - A string digitada supera o limite maximo!\n");
    } else{
        srt_cpy();
        printf("----> String original: %s\n", str1);
        printf("----> String cortada: %s\n", str2);
    }
}