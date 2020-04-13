#include<stdio.h>

/* 3 - Escreva um programa no qual seja chamada uma função que receba como parâmetro um ano e retorne 1 se o ano for bissexto,
 e 0 caso contrário. São bissextos todos os anos não seculares divisíveis por 4, e os seculares divisíveis por 400. */

int leap_checker(int try_year) {
    if (try_year % 4 == 0) {
        if (try_year % 100 != 0 ) {
            printf("\n1\n");
        }else{
            printf("\n0\n");
        }
    }else{
        if (try_year % 400 == 0){
            printf("\n1\n");
        }else{
            printf("\n0\n");
        }
    }

}


int main() {

    int year;

    printf("\nInforme o ano que deseja verificar se eh bissexto: ");
    scanf("%d", &year);
    leap_checker(year);
}