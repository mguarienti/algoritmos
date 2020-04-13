#include <stdio.h>

/*Crie um programa que receba do usu�rio tr�s numeros, esses n�meros devem ser inteiros e estar entre 1 e 10.
Das a��es do programa:
Se os n�meros informados pelo usu�rio forem iguais entre si, deve ser apresentado um c�lculo desse valor elevado ao cubo,
Se os n�meros forem diferentes, deve se mostrar o n�mero de maior valor entre eles, e mostrar quais s�o os pares e quais s�o impares.
Restri��es:
o teste para descoberta dos valores entre 1 e 10 deve ser feita utilizando no m�ximo um comando IF
o teste para descoberta do maior valor deve ser feita utilizando no m�ximo um comando IF, e um ELSE IF.
Desafio: coletar os tr�s valores distintos em um �nico comando */

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

