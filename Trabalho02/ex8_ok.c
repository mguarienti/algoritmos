# include <stdio.h>
# include <string.h>

/* 8) Fazer um programa em "C" que pregunta o nome, o endereço, o telefone e a
idade de uma pessoa e monta um string com a seguinte frase:
"Seu nome é ..., você tem ... anos, mora na rua ... e seu telefone é ... ."*/

main (){

    int j, i=0, t, l;
    char name[50];
    char addr[60];
    char phone[20]; // Suporta formato (+55 55 X xxxx-xxxx)
    char age[3];

	printf("-> Seu nome: ");
	fgets(name,50,stdin);

	printf("\n-> Seu Endreco: ");
	fgets(addr,60,stdin);

	printf("\n-> Seu Telefone: ");
	fgets(phone,20,stdin);

	printf("\n-> Sua Idade: ");
	fgets(age,3,stdin);


	printf("\n------------------------------------------------\n");
	printf(" --> Seu nome e %s, voce tem %s anos, mora na rua %s e seu telefone e %s.", name, age, addr, phone);


}


