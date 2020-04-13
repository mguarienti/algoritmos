#include<stdio.h>


/* 2.1) foi necessário uma extensão para o programa de alarmes. Agora o programa antes de tocar o alarme exibe em tela
uma mensagem perguntando se devemos ou não acionar o alarme. A resposta deve ser s/S- sim e n/N – não , verificar
qualquer outro tipo de carácter como uma resposta invalida. */

int main () {

    double temp1=0, temp2=0, temp3=0;
    char aux, tempCF;

    printf("INSIRA AS 3 TEMPERATURAS. UM 'ENTER' APOS CADA UMA.\n");
    scanf("%lf" "%lf" "%lf", &temp1, &temp2, &temp3);

        if (temp1 == temp2 && temp2 == temp3){ //Testa igualdade
            printf("TEMPERATURAS NORMAIS");
            }else{
                if(temp1 > temp2 && temp1 > temp3){  //Testa se temp1 é maior
                   printf("TEMPERATURA 1 FORA DO NORMAL. ALARME DEVE SER ACIONADO?:");
                   scanf("%c", &aux);
                   printf("SCAN OK");
                    switch (aux){
                        case 's':
                            printf("# ALARME ATIVADO!!!");
                            printf(" | #Temp1: %lf\n | Temp2: %lf\n | Temp3: %lf\n", temp1, temp2, temp3);
                            break;

                        case 'n':
                            printf("Alarme Desativado");
                            printf(" | #Temp1: %lf\n | Temp2: %lf\n | Temp3: %lf\n", temp1, temp2, temp3);
                            break;

                        default:
                            printf("Comando Invalido");
                            break;
                    }
                }else
                    if(temp2 > temp1 && temp2 > temp3){ //Testa se temp2 é maior
                        printf("TEMPERATURA 2 FORA DO NORMAL. ALARME DEVE SER ACIONADO?:");
                        scanf("%c", &aux);
                        switch (aux){
                            case 's':
                                printf("# ALARME ATIVADO!!!");
                                printf(" | Temp1: %lf\n | #Temp2: %lf\n | Temp3: %lf\n", temp1, temp2, temp3);
                                break;

                            case 'n':
                                printf("Alarme Desativado");
                                printf(" | Temp1: %lf\n | #Temp2: %lf\n | Temp3: %lf\n", temp1, temp2, temp3);
                                break;

                            default:
                                printf("Comando Invalido");
                                break;
                        }

                    }else{ //Assume que temp3 é maior
                        printf("TEMPERATURA 3 FORA DO NORMAL. ALARME DEVE SER ACIONADO?:");
                        scanf("%c", &aux);
                        switch (aux){
                            case 's':
                                printf("# ALARME ATIVADO!!!");
                                printf(" | Temp1: %lf\n | Temp2: %lf\n | #Temp3: %lf\n", temp1, temp2, temp3);
                                break;

                            case 'n':
                                printf("Alarme Desativado");
                                printf(" | Temp1: %lf\n | Temp2: %lf\n | #Temp3: %lf\n", temp1, temp2, temp3);
                                break;

                            default:
                                printf("Comando Invalido");
                                break;
                        }
                    }
            }
    }
