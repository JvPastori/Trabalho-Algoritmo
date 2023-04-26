#include<stdio.h>

main() {
	
	int maria,joao,soma;
	
	printf("Quantidade de dedos que Joao colocou\n");
	scanf("%d", &joao);
	
	printf("Quantidade de dedos que Maria colocou\n");
	scanf("%d", &maria);
	
	soma= joao+maria;
	
	if (soma %2 == 0) {
		printf("par");
	} else{
		printf("impar");
	}
	
	
	
}
