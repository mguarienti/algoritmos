#include<stdio.h>

/* Escreva um programa que leia um valor inteiro positivo n menor que 500 e um vetor de 500 elementos inteiros. 
A seguir, passe o inteiro e o vetor para uma função, que encontrará e retornará o n-ésimo maior elemento. O vetor 
não deve ser duplicado e nem modificado (não ordene). Por exemplo, lido o valor 3, deve ser mostrado o terceiro 
maior elemento do vetor. Considere que o vetor não tem valores repetidos. */

int check_vector(int val, int vet[]){
   
    int i, big=0, cont=0, n_maior;

    // Encontra o maior do Vetor:
    for (i=0; i<30; i++){
        if (vet[i] > big){
            big = vet[i];
        }
    }
    printf("Maior eh %d\n\n", big);

    /*
    -> A cada posição do vetor, verifica se existe um numero menor que big (big-1);
    -> Se existir, n_maior recebe big e incrementa um contador (o qual definira o n-ésimo);
    -> Se não existir, decrementa big em uma unidade e testa novamente em cada posição do vetor;
    -> Cada vez que um valor big-1 for encontrado no vetor, incrementará o contador equanto esse
       seja menor que o valor que o usuario quer saber. Quando sair do laço principal, n_maior
       terá o valor do n-ésimo ----> Matheus Guarienti */

    for(; cont < val; big--){
        for (i=0; i<30; i++){ 
            if (vet[i] == big){
                n_maior = big;
                cont++;
            }
        }  
    }
    return n_maior;
}

int main() {
    
    int value, done;
    // Para este exercício, considerando um vetor de 30 posições
    int vet[30]={1, 5, 23, 54, 71, -9, 3, 12, 63, -6, -1, 0, 4, 
    -56, 19, 21, 65, 7, 6, 10, 32, -41, 2, 53, 98, 77, 12, -25, 87, 9};

    printf("Insira um valor inteiro, positivo e menor que 30: ");
    scanf("%d", &value);
    if (value > 30 || value <= 0){
        printf("\nERRO: Insira um valor POSITIVO e MENOR ou igual a 30!\n");
    }else{
        done = check_vector(value, vet);
        printf("\nO %d^ maior valor eh: %d\n", value, done);
        printf("\n");
    }
}