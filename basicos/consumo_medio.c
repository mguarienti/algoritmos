#include<stdio.h>

main() {

  /*Dados uma distância e o total de litros de combustível gasto por um automóvel para percorrê-la, informe o consumo médio.*/

  float dist=0;
  float litros=0;
  float media=0;

  printf("INSIRA A DISTANCIA, EM Km, PERCORRIDA: ");
  scanf ("%f", &dist);
  printf("Distancia informada = %.2f Km\n", dist);

  printf("\n");

  printf("INSIRA OS LITROS DE COMBUSTIVEL UTILIZADOS: ");
  scanf ("%f", &litros);
  printf("Litros informados = %.2f l\n", litros);
  printf("\n");

  //Realiza cálculo:
  media = (dist/litros);

  printf("\n");
  printf("A media de consumo do automovel foi de %.2f Km/l\n\n", media);

  }
