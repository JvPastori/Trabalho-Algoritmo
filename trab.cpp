#include <stdio.h>

main()  {
	
	int idade;
	
	printf("Digite a idade do nadador\n");
	scanf("%i", &idade);
	
	if (idade >=5 &&idade <=7) {
		
		printf("o nadador tem %i anos e esta na Categoria Infantil A.\n");
	}
	else if (idade >=8 &&idade <=8){
		printf("o nadador tem %i anos e esta na Categoria Infantil B.\n");
	}
    else if (idade >= 11 && idade <= 13) {
        printf("O nadador tem %i anos e esta na categoria Juvenil A.\n", idade);
    }
    else if (idade >= 14 && idade <= 17) {
        printf("O nadador tem %i anos e esta na categoria Juvenil B.\n", idade);
    }
    else {
        printf("O nadador tem %i anos e esta na categoria Senior.\n", idade);
    }

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
