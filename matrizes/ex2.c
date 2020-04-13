#include <stdio.h>

/* 2- Escreva um código para receber matrix 5x5 de floats, que deve 
ser preenchida pelo usuário, em seguida, exiba os valores da matriz */

main (){
	float mtr1[5][5];
	int i, j;
	
	  printf ("\nDigite valores para popular a matriz:\n\n");
	  
	  for (i=0; i<5; i++){
	  	for (j=0; j<5; j++){
	  		printf ("\nColuna: [%d] / Linha:[%d] = ", i, j);
      		scanf ("%f", &mtr1[i][j]);
      		system("cls");
		  }
	  }
	  
	  printf ("\n A Matriz resultante e: \n\n");
	  
	  for (i=0; i<5; i++){
	  	for (j=0; j<5; j++){
	  		printf("%.3f ", mtr1[i][j]);
		  }
		printf("\n"); //pula linha quando termina a coluna
	  }	
}
