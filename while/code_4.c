#include<stdio.h>

/* Crie um programa que receba do usuario um valor, se menor que 100 exiba em tela 
de forma regressiva todos os valores ímpares exeto o numero 37. Se valor informado 
for maior ou igual a 100 exibir de forma regressiva os valores pares exceto o valor 
28. Se o valor informado for menor que 50 exiba os valores em ordem crescente exceto 
os valores 23 e 22. */

main() {

    int val=0, cont=0;

    printf("Informe um valor: ");
    scanf("%d", &val);

    if(val >= 50 && val < 100){ // val ímp. regr. sem 37
        while (val >= 0){
            if (val%2 != 0 && val != 37){
                printf("%d\n", val);
            }
        val--;
        }

    }else{
        if (val >= 100){ // val par. regr. sem 28
            while (val >= 0){
                if (val%2==0 && val != 28){
                    printf("%d\n", val);
                }
            val--;
            }
        }else{
            while (cont <= val){
                if (cont != 23 && cont != 22){
                    printf("%d\n", cont);
                }
            cont++;
            }
        }
    }
}