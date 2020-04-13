# include <stdio.h>

/* 4 - Escreva um código C para ordenar de forma crescente os valores da matriz */

main () {
	int mtz[4][4]={{2,5,10,4},{-3,8,1,5},{4,0,7,11},{3,-4,1,2}}, aux=mtz[1][1]; //aux entra na 1ª pos. da matriz
	int i, j;  
	
	for(i=0; i<4; i++){
		for (j=0; j<4; j++){
			f (mtz[i][j] = aux){
				aux = mtz[i][j];
			}
		}
	}
	// PRINTA A MATRIZ
	for (i=0; i<4; i++){
	  	for (j=0; j<4; j++){
	  		printf("%d ", mtz[i][j]);
		}
		printf("\n"); //pula linha quando termina a coluna
	}
}
