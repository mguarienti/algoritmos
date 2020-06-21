#include <stdio.h>
#include <stdlib.h>

/*1. Escreva um programa que leia um nome de um arquivo e um caractere, 
e verifique quantas vezes o caractere aparece no arquivo.*/

main () {

    char filename[20];
    char user_crct;
    char file_crct;
    int count_crct=0;
    FILE *fp;

    printf("\n-> Informe um arquivo (com extensao): ");
    gets(filename); //le o nome do arquivo
    printf("-> Informe um caractere: ");
    scanf("%c", &user_crct); //le o caractere

    //testa abrir o arquivo
    if ((fp = fopen(filename,"r")) == NULL) {
        puts("\n# Erro ao abrir o arquivo: O arquivo nao existe ou nao e possivel abri-lo!");
        exit(1);
    }

    file_crct = getc(fp);
    while (!feof(fp)) {
        if (file_crct == user_crct){
            count_crct++;
        }
    file_crct = getc(fp);
    }
    fclose(fp);
    printf("\n-> O caractere '%c' aparece %d vezes no arquivo '%s'.\n", user_crct, count_crct, filename);
}