#include <stdio.h>
#include <stdlib.h>

/*2.2) uma nova alteração surgiu, agora devemos apresentar ao usuário se a temperatura em deve ser em Celsius ou Fahrenheit,
peça ao usuário para informar C/c para Celsius e F/f Fahrenheit. Assumindo que a leitura sempre sera em Celsius */

int main () {

    double temp1=0, temp2=0, temp3=0;
   // double temp1=0, temp2=0, temp3=0;
    char aux, tempCF;

    printf("INSIRA AS 3 TEMPERATURAS, EM CELSIUS. UM 'ENTER' APOS CADA UMA.\n");
    scanf("%lf" "%lf" "%lf", &temp1, &temp2, &temp3);

        if (temp1 == temp2 && temp2 == temp3){ //Testa igualdade
            printf("TEMPERATURAS NORMAIS");
            }else{
                if(temp1 > temp2 && temp1 > temp3){  //Testa se temp1 é maior
                   printf("TEMPERATURA 1 FORA DO NORMAL. ALARME DEVE SER ACIONADO? DIGITE 'S/s' PARA SIM OU 'N/n' PARA NÃO:");
                   scanf("%s", &aux);
                   switch (aux){
                        case 's':
                        case 'S':
                            printf("# ALARME ATIVADO!!!\n");
                            printf("Digite 'C/c' para exibir a temperatura em Celsius ou 'F/f' para exibir a temperatura em Fahrenheit: ");
                            scanf("%s", &tempCF);
                            switch (tempCF){
                               case 'C':
                               case 'c':
                                    printf(" | #Temp1: %lfºC\n | Temp2: %lfºC\n | Temp3: %lfºC\n", temp1, temp2, temp3); //temp em Celsius
                                    break;
                                case 'F':
                                case 'f':
                                    temp1 = (temp1 - 32) * 5/9;
                                    temp2 = (temp2 - 32) * 5/9;
                                    temp3 = (temp3 - 32) * 5/9;
                                    printf(" | #Temp1: %lfºF\n | Temp2: %lfºF\n | Temp3: %lfºF\n", temp1, temp2, temp3); //temp em Fahrenheit
                                    break;
                                default:
                                    printf("Comando Invalido 2");
                                    break;
                            break;
                            }

                        case 'n':
                        case 'N':
                            printf("Alarme Desativado 4\n");
                            break;

                        default:
                            printf("Comando Invalido 5");
                            break;
                    }

                }else{ //fecha segundo if e abre segundo else if
                    if(temp2 > temp1 && temp2 > temp3){ //Testa se temp2 é maior
                        printf("TEMPERATURA 2 FORA DO NORMAL. ALARME DEVE SER ACIONADO? DIGITE 'S/s' PARA SIM OU 'N/n' PARA NÃO:");
                        scanf("%s", &aux);
                        switch (aux){
                            case 's':
                            case 'S':
                                printf("# ALARME ATIVADO!!!\n");
                                printf("Digite 'C/c' para exibir a temperatura em Celsius ou 'F/f' para exibir a temperatura em Fahrenheit: ");
                                scanf("%s", &tempCF);
                                switch (tempCF){
                                   case 'C':
                                   case 'c':
                                        printf(" | Temp1: %lfºC\n | #Temp2: %lfºC\n | Temp3: %lfºC\n", temp1, temp2, temp3); //temp em Celsius
                                        break;
                                    case 'F':
                                    case 'f':
                                        temp1 = (temp1 - 32) * 5/9;
                                        temp2 = (temp2 - 32) * 5/9;
                                        temp3 = (temp3 - 32) * 5/9;
                                        printf(" | Temp1: %lfºF\n | #Temp2: %lfºF\n | Temp3: %lfºF\n", temp1, temp2, temp3); //temp em Fahrenheit
                                        break;
                                    default:
                                        printf("Comando Invalido 7");
                                        break;
                                break;
                                }

                            case 'n':
                            case 'N':
                                printf("Alarme Desativado 9");
                                break;

                            default:
                                printf("Comando Invalido 10");
                                break;
                        }

                    }else{ //Assume que temp3 é maior //fecha segundo else if e abre else correspondente
                        printf("TEMPERATURA 3 FORA DO NORMAL. ALARME DEVE SER ACIONADO? DIGITE 'S/s' PARA SIM OU 'N/n' PARA NÃO:");
                        scanf("%s", &aux);
                        switch (aux){
                            case 's':
                            case 'S':
                                printf("# ALARME ATIVADO!!!\n");
                                printf("Digite 'C/c' para exibir a temperatura em Celsius ou 'F/f' para exibir a temperatura em Fahrenheit: ");
                                scanf("%s", &tempCF);
                                switch (tempCF){
                                   case 'C':
                                   case 'c':
                                        printf(" | Temp1: %lfºC\n | Temp2: %lfºC\n | #Temp3: %lfºC\n", temp1, temp2, temp3); //temp em Celsius
                                        break;
                                    case 'F':
                                    case 'f':
                                        temp1 = (temp1 - 32) * 5/9;
                                        temp2 = (temp2 - 32) * 5/9;
                                        temp3 = (temp3 - 32) * 5/9;
                                        printf(" | Temp1: %lfºF\n | Temp2: %lfºF\n | #Temp3: %lfºF\n", temp1, temp2, temp3); //temp em Fahrenheit
                                        break;
                                    default:
                                        printf("Comando Invalido 12");
                                        break;
                                break;
                                }

                            case 'n':
                            case 'N':
                                printf("Alarme Desativado 14");
                                break;

                            default:
                                printf("Comando Invalido 15");
                                break;
                        } //fecha else correspondente
                        } // fecha switch temp3
            } //fecha primeiro else
} // fecha main
}
