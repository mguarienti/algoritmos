# include <stdio.h>

/* 2) Uma caldeira tem sistema de medi��o de temperatura com tr�s sessores que entregam leituras em formato double. - OK
O alarme de seguran�a dispara quando a leitura possuir um valor mais alto que os demais. - OK

*desafio: informe o qual a diferen�a do maior valor e os demais - OK */

int main () {

double temp1=0, temp2=0, temp3=0;


printf("INSIRA AS 3 TEMPERATURAS. UM 'ENTER' APOS CADA UMA.\n");
scanf("%lf" "%lf" "%lf", &temp1, &temp2, &temp3);


    if (temp1 == temp2 && temp2 == temp3){ //Testa igualdade
        printf("TEMPERATURAS NORMAIS");
        }else{
            if(temp1 > temp2 && temp1 > temp3){  //Testa se temp1 � maior
                printf("ALARME: TEMPERATURA 1 FORA DO NORMAL\n");
                printf(" | #Temp1: %lf\n | Temp2: %lf\n | Temp3: %lf\n", temp1, temp2, temp3);
            }else
                if(temp2 > temp1 && temp2 > temp3){ //Testa se temp2 � maior
                     printf("ALARME: TEMPERATURA 2 FORA DO NORMAL\n");
                     printf(" | Temp1: %lf\n | #Temp2: %lf\n | Temp3: %lf\n", temp1, temp2, temp3);
                }else{ //Assume que temp3 � maior
                    printf("ALARME: TEMPERATURA 3 FORA DO NORMAL\n");
                    printf(" | Temp1: %lf\n | Temp2: %lf\n | #Temp3: %lf\n", temp1, temp2, temp3);
                }
        }
}
