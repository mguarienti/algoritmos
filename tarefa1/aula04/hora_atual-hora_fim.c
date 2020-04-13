#include<stdio.h>

/* 05 - Escreva um programa que leia a hora atual (parte inteira) e informe quantas
horas faltam para terminar o dia. Desafio: indicar hora e minutos restantes */

main() {

  int hora_atual;
  int hora_final;

  printf("INSIRA A HORA ATUAL: ");
  scanf("%d", &hora_atual);

  hora_final = 24 - hora_atual;

  printf("FALTAM %d HORAS PARA O FIM DO DIA", hora_final);


  }
