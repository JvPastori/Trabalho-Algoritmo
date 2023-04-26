#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	
	int catetoa,catetob,h;
	float hipotenusa;
	
	printf("digite o valor de catetoa\n");
	scanf("%i", &catetoa);	
	
	printf("Digite o valor de catetob\n");
	scanf("%i", &catetob);
	
	
	
	hipotenusa= sqrt(pow (catetoa,2) + pow (catetob,2));
	
	printf("O valor da hipotenusa e %.2f\n",hipotenusa);
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
}
