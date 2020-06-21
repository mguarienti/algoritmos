#include <stdio.h>
#include <stdlib.h>

/*2. Faça um programa para copiar um arquivo de texto. 
O arquivo de destino deve ser criado.*/

main () {

    char origin_fname[20];
    char destin_fname[20];
    
    char file_crt;
    
    FILE *origin_file;
    FILE *destin_file;

    printf("\n-> Informe o arquivo (com extensao) a ser COPIADO: ");
    gets(origin_fname);

    //Testa abrir o arquivo de ORIGEM (e se existe)
    if ((origin_file = fopen(origin_fname,"r")) == NULL) {
        puts("\n# Erro ao abrir o arquivo de origem: O arquivo nao existe ou nao e possivel abri-lo!");
        exit(1);
    }

    printf("\n-> Informe um arquivo (com extensao) a ser CRIADO: ");
    gets(destin_fname);

    //Verifica se existe um arquivo de DESTINO com esse nome
    while (fopen(destin_fname,"r") != NULL) {
        puts("\n# Erro: Ja existe um arquivo com esse nome!");
        printf("\n-> Informe outro arquivo (com extensao) a ser criado: ");
        gets(destin_fname);
    }

    //cria o arquivo de destino
    destin_file = fopen(destin_fname,"a");

    // Copia o conteudo para o novo arquivo
    while ((file_crt = getc(origin_file)) != EOF){
        putc(file_crt, destin_file);
    }
    fclose (origin_file);
    fclose (destin_file);
    printf("\n-> Arquivo copiado com sucesso!");

}