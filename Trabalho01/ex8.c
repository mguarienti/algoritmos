#include<stdio.h>

/* 8. Escreva um programa para ler 3 valores inteiros (considere que não serão lidos valores
iguais) e escrevê-los em ordem crescente. */

int main() {

  int n1;
  int n2;
  int n3;

  printf("INDIQUE 3 VALORES: \n");
  scanf("%d" "%d" "%d", &n1, &n2, &n3);


if (n1 > n2){
    if (n2 > n3){
            printf("A - Ordem: %d %2d %2d\n", n3, n2, n1);
    }else{
        if (n1 > n3){
            printf("B - Ordem: %d %2d %2d\n", n2, n3, n1);
        }else{
            printf("C- Ordem: %d %2d %2d\n", n2, n1, n3);}
    }
}else{
    if (n2 > n3){
        if (n1 > n3){
                printf("D - Ordem: %d %2d %2d\n", n3, n1, n2);
            }else{
                printf("E - Ordem: %d %2d %2d\n", n2, n3, n1);}
    }else{
        printf("F - Ordem: %d %2d %2d\n", n1 ,n2, n3);}
}
}
