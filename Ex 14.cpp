#include <stdio.h>
#include <math.h>

main() {
	
	float a,b,c,delta,x1,x2;
	printf ("Digite os coeficientes a, b e c da equacao do primeiro grau:\n");
	scanf("%f %f %f",&a,&b,&c);
	delta = b*b - 4*a*c;
	
	if (delta > 0){
		x1= (-b + sqrt(delta)) / (2*a);
		x2= (-b - sqrt(delta)) / (2*a);
		printf("As raizes sao x1= %.2f e x2 %.2f",x1,x2);
	} else if(delta == 0) {
		x1= (-b) / (2*a);
		printf("A unica raiz da equacao e x1 = %.2f\n", x1, x2);

	} else{
		printf("A equacao nao possui raizes reais\n");
	}	
	
}
