#include <stdio.h>

int main() {
    float salario,indice,reajuste,percentual,novosalario;
    
    printf("Digite o seu salario\n");
    scanf("%f", &salario);
	
	
	if (salario <= 400){
		percentual= 0.15;	
	} else if (salario<= 800){
		percentual= 0.12;
	 } else if (salario<= 1200){
	 	percentual= 0.10;
	 } else if (salario<= 2000){
	 	percentual= 0.07;
	 } else{
	 	percentual= 0.04;
	 }
	 
	 reajuste= salario*percentual;
	 novosalario= salario+reajuste;
	 indice= percentual*100;
	 
	 
	printf("Novo salario: R$ %.2f\n",novosalario);
	printf("Valor do reajuste: R$ %.2f\n",reajuste);
	printf("indice de reajuste: %.2f\n",indice);
	 	}
	 
	
