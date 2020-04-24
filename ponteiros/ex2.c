# include <stdio.h>
# include <string.h>

/* 2. Escrever um programa que leia uma string e crie uma nova string na qual as letras são replicadas 
de acordo com sua posição na string lida, ou seja, a primeira letra é copiada uma vez, a segunda duas
vezes, a terceira três vezes, e assim por diante. Se for lida a string “hora”, por exemplo, a string 
criada deve ser “hoorrraaaa”. Faça a manipulação com ponteiros, sem usar índices.*/


int main (){
    
    char str1[30], str2[30];
    char *walker; //ponteiro tipo char ira percorrer a string
    int cont, i=0;

    printf("--> Informe uma string: ");
    gets(str1);

    if (strlen(str1) > 30){ // verifica se a string está no limite alocado
        printf("\n#ERRO - A string digitada supera o limite maximo!\n");
    } else {
        walker = str1; //coloco walker no inicio da string

        for (cont=1; *walker != '\0'; walker++){ // percorre a string até achar um '\0'
            for(i=0; i<cont; i++){ // printa o conteúdo de walker 'count' vezes;
                printf("%c", *walker);
            }
            cont++; //incrementa o contador para avançar uma posição
        }
    }
}