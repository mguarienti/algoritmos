#include <stdio.h>

/* 1.0 Crie um código para uma lista de contatos, o usuário deve informar a letra inicial do nome que deseja
buscar na lista; o programa deve retornar todos os contatos que estiverem cadastrados na lista; use somente switch case

# Expansao: Selecionar Agenda ou Calculadora:

Se for a função de calculo o usuário deve informar os valores e a operação que deseja realizar
	1)Para as operações de divisão. Informar ao usuário quando os valores não podem ser divididos
	2)Para soma e subtração informar se o valor resultante é negativo
	3)Para Multiplicação informar se o resultado é par ou impar */

int main () {
	
	int var1, var2, res; // declara variaveis (era float)
	int op, select;
	char init;
	
	printf("SELECIONE O SERVICO DESEJADO:\n [1] - Calculadora\n [2] - Agenda\n\n");
	printf("Opcao: ");
	scanf("%d", &select);
	switch (select){
		case 1: //SELECIONA CALCULADORA
		  printf("\nDigite o primeiro numero para calcular: ");
		  scanf("%d", &var1);
		  printf("\n");
		
		  printf("Escolha uma operacao:\n [1] - Soma\n [2] - Subtracao\n [3] - Multiplicacao\n [4] - Divisao\n\n");
		  printf("Opcao: ");
		  scanf("%d", &op);
		  printf("\n");
		
		  printf("Digite o segundo numero para calcular: ");
		  scanf("%d", &var2);
		  printf("\n");
	
		  switch (op){
		    case 1:
		        res = var1 + var2;
		        printf("O resultado de %d + %d = %d\n", var1, var2, res);
		        if (res < 0) { // informar se o valor resultante é negativo
		        	printf("O valor é negativo.");
		        }
		        break;
		    case 2:
		        res = var1 - var2;
		        printf("O resultado de %d - %d = %d\n", var1, var2, res);
		        if (res < 0) { // informar se o valor resultante é negativo
		        	printf("O valor é negativo.");
		        }
		        break;
		    case 3:
		        res = var1 * var2;  
		        printf("O resultado de %d * %d = %d\n", var1, var2, res);
		        if (res % 2 == 0) { //  informar se o resultado é par ou impar
		        	printf("O valor é par.");
		        }else{
		        	printf("O valor é ímpar.");
		        }
		        break;
		    case 4:
		        if (var1 % var2 != 0) { // informar ao usuário quando os valores não podem ser divididos
		        	printf("Os valores não podem ser dividos pois o resto e diferente de zero.");
		        }else{
		        	res = var1 / var2;
		        	printf("O resultado de %d / %d = %d\n", var1, var2, res);
		        }
		        break;
		    default:
		        printf("ERRO\n");
		        break;
		
		    printf("\n");
		    printf("\n");
		  }
			break;
			
		case 2: // SELECIONA AGENDA
			printf("\nINSIRA A INICIAL DO NOME A SER CONSULTADO: ");
			scanf("%s", &init);
		
			switch (init){
				case 'a':
				case 'A':
					printf("\nNome: Alexandra Alvez\nCel: (99)-9999-9999\nEmail: email@email.com\n\n");
					printf("\nNome: Alex Alvez\nCel: (99)-9999-9999\nEmail: email@email.com\n\n");
					break;
					//Adicionar mais nomes aqui
				case 'b':
				case 'B':
					printf("\nNome: Bruno Garcia\nCel: (99)-9999-9999\nEmail: email@email.com\n\n");
					printf("\nNome: Bernardo Silva\nCel: (99)-9999-9999\nEmail: email@email.com\n\n");
					break;
					//Adicionar mais nomes aqui
				default:
					printf("\nNome nao encontrado.\n");
					break;
			}
			break;
	}
} 

// Matheus Guarienti