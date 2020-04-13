# include <stdio.h>

/* uma caldeira tem sistema de medição de temperatura com tres senssores que entregam leituras em formato double.
O alarme de segurança dispara quando leitura possuir um valor mais alto que os  demais */

int main () {

double temp1=0, temp2=0, temp3=0;


printf("INSIRA AS 3 TEMPERATURAS. UM 'ENTER' APOS CADA UMA.\n");
scanf("%lf" "%lf" "%lf", &temp1, &temp2, &temp3);


    if (temp1 == temp2 && temp2 == temp3){ //Testa igualdade
        printf("TEMPERATURAS NORMAIS");
        }else{
            if(temp1 > temp2 && temp1 > temp3){  //Testa se temp1 é maior
                printf("TEMPERATURA temp1 E MAIOR\n");
                printf(" | #Temp1: %lf\n | Temp2: %lf\n | Temp3: %lf\n", temp1, temp2, temp3);
            }else
                if(temp2 > temp1 && temp2 > temp3){ //Testa se temp2 é maior
                     printf("TEMPERATURA temp2 E MAIOR\n");
                     printf(" | Temp1: %lf\n | #Temp2: %lf\n | Temp3: %lf\n", temp1, temp2, temp3);
                }else{ //Assume que temp3 é maior
                    printf("TEMPERATURA temp3 E MAIOR\n");
                    printf(" | Temp1: %lf\n | Temp2: %lf\n | #Temp3: %lf\n", temp1, temp2, temp3);
                }
        }
}
