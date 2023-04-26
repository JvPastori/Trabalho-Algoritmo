#include<stdio.h>

main() {
	float nota1,nota2,media;
	int frequencia;
	
	printf("Digite a primeira nota do aluno:\n");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota do aluno:\n");
	scanf("%f", &nota2);
	
	printf("Digite o percentual de frequencia do aluno:\n");
	scanf("%D", &frequencia);
	
	media= (nota1 + nota2) /2;
	
	if (media >= 7 && frequencia >= 75 ) {
		printf("Aluno Aprovado!");	
	} else{
		printf ("Aluno reprovado");
	}
	return 0;
}
