#include<stdio.h>

/* 14. Escreva um código que receba um numero de no mínimo 3 dígitos e apresente sua versão
inversa  //  Ex: 123 -> 321 */

int main (){

    int num, inv=0, x, cache;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num > 99){  //checa se possui 3 digitos
    	x = num; 
	    for ( ; num > 0; ) { //armazena o dígito atual em 'cache' e realiza a inversão matemática (resto e multiplicação)
	        cache = num % 10;
	        inv = inv * 10 + cache;
	        num /= 10;
	    }
	    printf("\nNumero invertido = %ld\n", inv);
	}else {
		 printf("\nERRO: O numero informado deve possuir, no mimimo 3 digitos!");
	}
    
}

