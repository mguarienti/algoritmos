# include <stdio.h>
# include <string.h>

/* 5 - Escreva um programa que leia uma string e chame uma função, passando a string como parâmetro para calcular o 
seu tamanho (número de letras). O valor calculado deve ser retornado para a função main, e então exibido na tela. */

int calc_length (char str1[]){
    int len;

    len = strlen(str1);
    return len;
}

int main() {

    char str[50];
    int done;

    printf("\nDigite a string desejada: ");
    gets (str);
    //done = calc_length(str);
    done = strlen(str);
    printf("\n\n--> A string digitada possui %d caracteres.\n\n", done);
}