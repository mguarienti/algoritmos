# include <stdio.h>

/* 1 - Escreva um programa que leia um número inteiro e passe o número para uma função em 
que é calculado o valor do seu fatorial. O resultado deve ser mostrado na função main. */

int fatorial(int fat_value) {
    int aux = (fat_value - 1);
    
    switch (fat_value){
        case 0:
            return 0;
            break;
    
        case 1:
            return 1;
            break;

        default:
            while(aux >= 1){
                fat_value = fat_value * aux;
                aux--;
            }
            return fat_value;
            break;
    }
    
}
int main() {

    int value, done;

    printf("\nInforme um valor inteiro: ");
    scanf("%d", &value);
    done = fatorial(value);
    printf("O fatorial de %d eh: %d\n\n", value, done);

}