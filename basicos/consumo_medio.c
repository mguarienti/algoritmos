#include<stdio.h>

main() {

  /*Dados uma dist�ncia e o total de litros de combust�vel gasto por um autom�vel para percorr�-la, informe o consumo m�dio.*/

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

  //Realiza c�lculo:
  media = (dist/litros);

  printf("\n");
  printf("A media de consumo do automovel foi de %.2f Km/l\n\n", media);

  }
