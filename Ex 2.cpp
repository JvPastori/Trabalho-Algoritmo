#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float altura, raio, area, litros, latas, custo;

    printf("Informe a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Informe o raio do cilindro: ");
    scanf("%f", &raio);

    // Calcula a área do cilindro
    area = M_PI * pow(raio, 2) + 2 * M_PI * raio * altura;

    // Calcula a quantidade de litros de tinta necessários
    litros = area / 3;

    // Calcula a quantidade de latas de tinta necessárias
    latas = ceil(litros / 5);

    // Calcula o custo das latas de tinta
    custo = latas * 50;

    printf("Quantidade de latas de tinta necessarias: %.0f\n", latas);
    printf("Custo das latas de tinta: R$ %.2f\n", custo);

system("pause");
}
