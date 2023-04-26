#include<stdlib.h>
#include<stdio.h>

main(){
float C, F;
printf("Informe o valor em Celsius: ");
scanf("%f", &C);
F = (C*1.8)+32;
printf("Temperatura em fahrenheit = %f \n", F);
}
