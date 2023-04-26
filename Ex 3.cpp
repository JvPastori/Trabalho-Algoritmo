#include <stdio.h>
#include <stdlib.h>

main() {
	
float comb,geral;
int dist;

printf("Valor total percorrido em Km\n");
scanf("%i", &dist);

printf("Total de combustivel gasto em litros\n");
scanf("%f", &comb);

geral= dist / comb;
printf("O valor e: %.3f km/l\n ",geral);

	
	
	
	
}

