# include <stdio.h>

/* 2 - Escrever um programa que lê um valor que representa a medida, em metros, da aresta de um cubo, e chama 
uma função para calcular o volume do cubo e outra para calcular o perímetro de cada um dos seus lados. */

float calc_volume(float edge_vol) {
    edge_vol = edge_vol * edge_vol * edge_vol;
    return edge_vol;
}

float calc_perimeter(float edge_per) {
    edge_per = edge_per * 12;
    return edge_per;
}

int main() {

    float edge, volume, perimeter;

    printf("\nInforme a medida, em metros, da aresta de um cubo: ");
    scanf("%f", &edge);
    volume = calc_volume(edge);
    perimeter = calc_perimeter(edge);
    printf("\n--> O volume do cubo eh: %.2fm3\n\n--> O perimetro do cubo eh %.2fm2\n\n", volume, perimeter);

}