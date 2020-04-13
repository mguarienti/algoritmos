#include<stdio.h>

/* Escrever um programa que leia uma matriz 5 x 5 e passe essa matriz como parâmetro para uma função, juntamente 
com um valor indicando uma coluna. A função deve retornar a posição (linha) do menor elemento da coluna indicada 
no parâmetro. O valor do elemento encontrado e seus índices devem ser exibidos na função main como resultado.*/

int smallest_element(int column, int mtx[][5]){

    int i, j, cont=0, smallest=mtx[0][column]; //smallest entra valendo o primeiro elemento da coluna

	for (i=0; i<4; i++){ // laço troca de linha
		if (smallest > mtx[i+1][column]){ // verifica se smallest é maior que seu sucessor
      smallest = mtx[i+1][column]; // se sim, entao à ele é atribuído
      cont = i+1; // e contador armazena a linha correspondente
		}
	}
    return cont;
}


int main() {
    
    int col, done, i, j;
    int mtz[5][5]={{2,5,10,4,8},{-3,8,30,12,5},{4,24,20,77,1},{31,-4,18,24,45},{13,99,5,7,19}};

    printf("\n# Considerando a seguinte matriz [5][5]:\n\n");
    for (i=0; i<5; i++){
	    for (j=0; j<5; j++){
	      printf("[%d] ", mtz[i][j]);
		    }
		  printf("\n");
	  }	

    printf("\nInsira um valor inteiro de 0 a 4 para representar a coluna: ");
    scanf("%d", &col);
    if (col > 4 || col < 0){
        printf("\nERRO: Insira um valor inteiro de 0 a 4!\n");
        printf(" ");
    }else{
        done = smallest_element(col, mtz);
        printf("--> Na coluna %d, a linha %d contem o menor elemento!\n", col, done); //começa na coluna/linha 0!!!!}
        printf("--> O menor elemento %c %d!", 130, mtz[done][col]);
        printf("\n\n");
    }
}