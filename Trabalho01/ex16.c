#include<stdio.h>

/* 16. O cálculo do consumo de energia elétrica dos aparelhos de sua casa pode te ajudar a economizar
eletricidade e dinheiro. O consumo de energia elétrica dos aparelhos de uma casa é obtido aplicando-se
a fórmula: cons = (t * p)/1000

t: tempo em que o produto permanece ligado (horas mensais)
p: potência do aparelho (em Watts)

Por exemplo, um televisor de 29 polegadas, com potência de 200 Watts e ligado 6 horas por dia, correspondentes
a 180 horas mensais consome:
cons = (180*200) / 1000
cons = 36000 / 1000
cons = 36
O televisor irá consumir 36 kW/hora no período.

Faça um programa completo, em linguagem C, que calcule para um determinado aparelho elétrico o consumo de
eletricidade do mesmo durante um mês. Os valores do tempo de uso mensal do aparelho e sua potência devem
ser informados pelo usuário. Após realizado o cálculo de consumo, o programa deve retornar a seguinte mensagem:

O consumo do aparelho é de <quantidade> kW/hora por mês.

Em seguida, o programa deve calcular e exibir o custo em dinheiro deste consumo, multiplicando a quantidade
consumida pelo aparelho pelo preço do kW/hora. A partir do valor da previsão de consumo mensal, o programa
deve gerar o valor do consumo do aparelho (em Reais) utilizando as as seguintes regras de tarifas tarifárias:

• Consumo mensal até 30 kW/h = R$0,11882
• Consumo mensal entre 31 até 100 kW/h = R$0,20370
• Consumo mensal entre 101 até 220 kW/h = R$0,30555
• Consumo mensal superior a 220 kW/h = R$0,33951  */

int main (){

    float p=0, t=0, c=0, ca=0;

    printf("\nCALCULO DE CONSUMO DE ENERGIA ELETRICA POR UM EQUIPAMENTO\n");

    printf("\nInsira a potencia do quipamento, em Watts: ");
    scanf("%f", &p);

    printf("\nInsira o tempo de uso mensal do equipamento, em horas: ");
    scanf("%f", &t);

    c = (t * p) / 1000;

    printf("\n\nO consumo do aparelho é de %.2f kW/hora por mes.\n", c);


    if (c <= 30){
        printf("O preco do kW/h passa a custar R$0,11882\n");
        ca = c * 0.11882;
        printf("O valor gasto pleo aparelho, em um mes sera de R$ %.2f\n\n", ca);
    }else{
        if (c >= 31 && c <= 100){
            printf("O preco do kW/h passa a custar R$0,20370");
            ca = c * 0.20370;
            printf("O valor gasto pleo aparelho, em um mes sera de R$ %.2f\n\n", ca);
        }else{
            if(c >= 101 && c <= 220){
                printf("O preco do kW/h passa a custar R$0,30555");
                ca = c * 0.30555;
                printf("O valor gasto pleo aparelho, em um mes sera de R$ %.2f\n\n", ca);
            }else{
                printf("O preco do kW/h passa a custar R$0,33951");
                ca = c * 0.33951;
                printf("O valor gasto pleo aparelho, em um mes sera de R$ %.2f\n\n", ca);
            }


        }


    }










}

