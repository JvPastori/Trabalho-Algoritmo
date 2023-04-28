#include <stdio.h>

int main() {
    int codigo,quantidade;
    float Valor;

    printf("Digite o codigo do produto\n");
    scanf("%i", &codigo);
	
	printf("Digite a quantidade\n");
	scanf("%i", &quantidade);
	



    if (codigo == 100){
    Valor = quantidade* 7.50; 	
		printf("Valor Total = %.2f\n",Valor);
		}
	else if (codigo == 101){
    Valor = quantidade* 5.50; 	
		printf("Valor Total = %.2f\n",Valor);
} 	else if (codigo == 102){
    Valor = quantidade* 10.50; 	
		printf("Valor Total = %.2f\n",Valor);
} 	else if (codigo == 104){
    Valor = quantidade* 11.00; 	
		printf("Valor Total = %.2f\n",Valor);
} else if (codigo == 105){
    Valor = quantidade* 13.50; 	
		printf("Valor Total = %.2f\n",Valor);
} else if (codigo == 106){
    Valor = quantidade* 3.50; 	
		printf("Valor Total = %.2f\n",Valor);
} else{
	printf("Codigo invalido");
}
}
