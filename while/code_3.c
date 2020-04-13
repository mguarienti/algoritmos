#include<stdio.h>

/* Receber do usuário um valor inteiro maior que 20 e exibir
os valores até 0 de forma regressiva - incluindo o digitado*/

main() {

    int val;

    printf("Informe um valor inteiro maior que 20: ");
    scanf("%d", &val);

    if(val > 20){
        while(val >= 0){
            printf("%d\n", val);
            val--;
        } 

    }else{
        printf("ERRO: O valor nao esta no intervalo definido.");
    }
}