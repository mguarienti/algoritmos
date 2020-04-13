#include<stdio.h>

/* 14. Escreva um c�digo que receba um numero de no m�nimo 3 d�gitos e apresente sua vers�o
inversa  //  Ex: 123 -> 321 */

int main (){

    int num, inv=0, x, cache;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num > 99){  //checa se possui 3 digitos
    	x = num; 
	    for ( ; num > 0; ) { //armazena o d�gito atual em 'cache' e realiza a invers�o matem�tica (resto e multiplica��o)
	        cache = num % 10;
	        inv = inv * 10 + cache;
	        num /= 10;
	    }
	    printf("\nNumero invertido = %ld\n", inv);
	}else {
		 printf("\nERRO: O numero informado deve possuir, no mimimo 3 digitos!");
	}
    
}

