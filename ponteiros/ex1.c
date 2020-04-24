# include <stdio.h>
# include <string.h>

/* 1. Escreva um programa que leia uma string e verifique se esta string é um palíndromo. 
Atenção: considere todos os caracteres na verificação, ou seja, “luz azul”, por exemplo, 
não deve ser considerado palíndromo. Faça a manipulação com ponteiros, sem usar índices.*/

/* Objetivo: Como não se sabe onde termina a string (devido ao uso de ponteiros) a ideia inical
é percorrer a string informada até encontrar o '\0' indicando o fim da mesma e comparar o valor
da última posição (letra) com a primeira até que o início e o final se encontrem (meio).*/

int main (){

    char str1[30];
    char *end, *start; // um ponteiro end (do fim para o começo) e um ponteiro start (do começo para o fim)

    printf("--> Informe uma string: ");
    gets(str1);

    if (strlen(str1) > 30){ // verifica se a string está no limite alocado
        printf("\n#ERRO - A string digitada supera o limite maximo!\n");
    } else{
        // start e end recebem o primeiro endereço da string
        start = str1;
        end = str1;

        // Incrementa end enquanto não encontra um '\0' ("percorre a string")
        do {
            ++end;
        } while (*end != '\0');
        end--; //volta um, pois não quero o '/0' e sim o caractere; aqui, end está no último caractere valido

        do {
            if (*start == *end) { //checa se os conteúdos dos ponteiros nas posições "inversas" são iguais. Caso sim:
                start++; // incrementa e avança o que está no início
                end--; // decrementa e retorna o que está no fim
            } else{ 
                printf("\n-->NAO! A string nao eh um palindromo!\n"); 
                break; // se for encontrada discrepancia, então o laço é interrompido pois já sabemos que não é palindromo
            }
        } while (start <= end); // Do_While vai durar enquanto o 'start' (começo) for menor ou igual (meio) ao 'end' (fim)
        
        // se não houver discrepâncias, os conteúdos de 'start' e 'end' devem ser iguais, logo é palindromo
        if (*start == *end){
            printf("\n-->SIM! A string eh um palindromo!\n");
            //printf("%c", *start);
        }
    } 
}