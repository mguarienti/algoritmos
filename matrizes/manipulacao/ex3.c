# include <stdio.h>

/* 3 - Escreva um código em C para encontrar o maior 
valor da matriz e exibir os valores e suas coordenadas */

main (){
	int mtz[4][4]={{2,5,10,4},{-3,8,1,5},{4,0,7,11},{3,-4,1,2}}, aux=mtz[1][1]; //aux entra na 1ª pos. da matriz
	int i, I, j, J;
	
	for(i=0; i<4; i++){
		for (j=0; j<4; j++){
			if (mtz[i][j] > aux){ //se o valor na posição for maior que aux
				aux = mtz[i][j]; //então sobrescreve aux
				I = i+1; // I recebe o valor da linha
				J = j+1; // J recebe o valor da coluna
			}
		}
	}
	printf("O maior valor e: %d na posicao L=[%d] C=[%d]", aux, I, J);
}
