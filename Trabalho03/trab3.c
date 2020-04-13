# include <stdio.h>

/* 5 - Com base no exercício 4, crie um vetor de 5 posições para essa estrutura;
	Utilixe 'for' para preencher os elementos.*/

int main (){
	
	int i, cont=1, choice;
	
	struct cadeira {
		char fila;
		int coluna;
		char usuario[50];
		int status;
	};
	
	struct cadeira log;
	
	printf ("\n____________________________________________\n");
	printf ("\n SISTEMA DE CONTROLE DE ACENTOS DO TEATRO:\n");
	printf ("____________________________________________\n");
	
	printf ("\n-> MENU:\n");
	printf ("  -> [1] Exibir Cadeiras;\n");
	printf ("  -> [2] Cadastrar Cliente;\n");
	printf ("  -> [3] Remover Cliente;\n");
	printf ("  -> [0] Sair do Sistema;\n");
	
	printf ("\n-> Acao: ");
	scanf ("%d", &choice);

	switch (choice){
	    case 0:
	        break;
	    
	    case 1:
	    // https://www.ricardoarrigoni.com/tabela-ascii-completa/
	    
		printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203);printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203);
	    printf ("%c Cadeira:          ",186);printf ("%c Cadeira:          %c\n",186,186);
	    printf ("%c Cliente:          ",186,186);printf ("%c Cliente:          %c\n",186,186);
	    printf ("%c Status:           ",186);printf ("%c Status:           %c\n",186,186);
	    printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206); printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206);
	    printf ("%c Cadeira:          ",186);printf ("%c Cadeira:          %c\n",186,186);
	    printf ("%c Cliente:          ",186);printf ("%c Cliente:          %c\n",186,186);
	    printf ("%c Status:           ",186);printf ("%c Status:           %c\n",186,186);
	    printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206);printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206); 
	    printf ("%c Cadeira:          ",186);printf ("%c Cadeira:          %c\n",186,186);
	    printf ("%c Cliente:          ",186);printf ("%c Cliente:          %c\n",186,186);
	    printf ("%c Status:           ",186);printf ("%c Status:           %c\n",186,186);
	    printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206);printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206);
	    printf ("%c Cadeira:          ",186);printf ("%c Cadeira:          %c\n",186,186);
	    printf ("%c Cliente:          ",186);printf ("%c Cliente:          %c\n",186,186);
	    printf ("%c Status:           ",186);printf ("%c Status:           %c\n",186,186);
	    printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);printf ("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202);

	    	
	        break;
	        
	    case 2:
	        break;
	        
	    case 3:
	    	break;
	    	
	    default:
	        break;
	
	  }
}
