#include <stdio.h>

/*Crie um programa que receba do usuário três numeros, esses números devem ser inteiros e estar entre 1 e 10.
Das ações do programa:
Se os números informados pelo usuário forem iguais entre si, deve ser apresentado um cálculo desse valor elevado ao cubo,
Se os números forem diferentes, deve se mostrar o número de maior valor entre eles, e mostrar quais são os pares e quais são impares.
Restrições:
o teste para descoberta dos valores entre 1 e 10 deve ser feita utilizando no máximo um comando IF
o teste para descoberta do maior valor deve ser feita utilizando no máximo um comando IF, e um ELSE IF.
Desafio: coletar os três valores distintos em um único comando */

main () {

int n1, n2, n3;
int aux;

printf("INSIRA OS TRES VALORES ENTRE 1 E 10 (press. enter apos cada valor):\n");
scanf("%d" "%d" "%d", &n1, &n2, &n3);

if((n1 >= 1 && n1 <= 10) && (n2 >= 1 && n2 <= 10) && (n3 >= 1 && n3 <= 10)){  //CHECA INTERVALO
    if((n1 == n2) && (n2 == n3)){ //VERIFICA SE SAO IGUAIS
        aux = n1 * n1 * n1;
        printf("O CUBO DO VALOR E %d\n", aux);
    }else{ // CONSIDERA QUE SAO DIFERENTES
        if(n1%2 == 0){ //VERIFICA SE n1 E PAR
            printf("%d E PAR\n", n1);
        }else{
            printf("%d E IMPAR\n", n1);
        }
        if(n2%2 == 0){ //VERIFICA SE n2 E PAR
            printf("%d E PAR\n", n2);
        }else{
            printf("%d E IMPAR\n", n2);
        }
        if(n3%2 == 0){ //VERIFICA SE n3 E PAR
            printf("%d E PAR\n", n3);
        }else{
            printf("%d E IMPAR\n", n3);
        }

        if(n1>n2 && n1>n3){ //VERIFICA QUAL E O MAIOR
            printf("%d E MAIOR\n", n1);
        }else{
            if(n2>n3){
                printf("%d E MAIOR\n", n2);
            }else{
                printf("%d E MAIOR\n", n3);
            }
        }
    }
    }else{
        printf("OS VALORES INFORMADOS ESTAO FORA DO INTERVALO.");
    }
}

