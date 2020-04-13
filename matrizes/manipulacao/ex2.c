# include <stdio.h>

/* 2 - Escreva um código em C para encontrar o menor valor da matriz e exibir */

main (){
	int mtz[4][4]={{2,5,10,4},{-3,8,1,5},{4,0,7,11},{3,-4,1,2}}, i, j, aux=mtz[1][1]; //aux entra na 1ª pos. da matriz
	
	for(i=0; i<4; i++){
		for (j=0; j<4; j++){
			if (mtz[i][j] < aux){ //se o valor na posição for menor que aux
				aux = mtz[i][j]; //então sobrescreve aux
			}
		}
	}
	printf("O maior valor e: %d", aux);
}
