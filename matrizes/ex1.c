#include <stdio.h>

/* 1- Escreva um código para receber matrix 10x10 de inteiros, que deve 
ser preenchida pelo usuário, em seguida, exiba os valores da matriz */

main (){
	int mtr1[10][10], i, j;
	
	  printf ("\nDigite valores para popular a matriz:\n\n");
	  
	  for (i=0; i<10; i++){
	  	for (j=0; j<10; j++){
	  		printf ("\nColuna: [%d] / Linha:[%d] = ", i, j);
      		scanf ("%d", &mtr1[i][j]);
      		system("cls");
		  }
	  }
	  
	  printf ("\n A Matriz resultante e: \n\n");
	  
	  for (i=0; i<10; i++){
	  	for (j=0; j<10; j++){
	  		printf("%d ", mtr1[i][j]);
		  }
		printf("\n"); //pula linha quando termina a coluna
	  }	
}
