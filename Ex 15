#include <stdio.h>

int main(){
	
	int mamifero,quadrupede,bipede,carnivoro,herbivoro,onivoro,frutifero,voador,aquatico;
	int aves,naovoador,nadador,rapina,tropical,polar;
	int repteis,comcasco,sempatas,ca;
	
	printf("Jogo dos Animais \n");
	printf("DIgite 1 para sim e 0 para nao\n");
	
	printf("O seu animal e mamifero\n");
	scanf("%d", &mamifero);
	if(mamifero == 1){
		printf("O seu animal e quadrupede");
		scanf("%d", &quadrupede);
	} if (quadrupede ==1 && mamifero == 1){
		printf("O seu animal e carnivoro");
		scanf("%d",&carnivoro);
	} if (carnivoro ==1){
		printf("Entao o animal e o leao");
	} if (carnivoro ==0 && mamifero == 1 && quadrupede== 1){
		printf("O seu animal e herbivoro");
		scanf("%d", &herbivoro);
	}  if (herbivoro == 1){
	  	printf("Entao o animal e o Cavalo");
	}	
	 if (quadrupede ==0){
		printf("O seu animal e bipede");
		scanf("%d", &bipede);
	} if (bipede == 1){
		printf("O seu animal e onivoro");
		scanf("%d", &onivoro);
	} if (onivoro == 1){
		printf("Entao o animal e o Homem");
	} if (onivoro == 0 && mamifero == 1){
		printf("O seu animal e frutifero");
		scanf("%d", &frutifero);
	} if (frutifero == 1) {
		printf("Entao o animal e o Macaco");	
	} if (mamifero== 1 && bipede == 0 && quadrupede==0){ 
		printf("O seu animal e Voador");
		scanf("%d", &voador);
	} if (voador==1){
		printf("Entao o animal e o Morcego");	
	} if(voador == 0 && bipede == 0 && quadrupede==0){
		printf("O seu animal e aquatico");
		scanf("%d",&aquatico);
	} if (aquatico==1){
		printf("Entao o animal e a baleia");
	}
	
	  if (mamifero == 0){
	  	printf("O seu animal e uma ave");
	  	scanf("%d", &aves);
	  } if (aves == 1){
	  	printf("O seu animal e um nao voador");
	  	scanf("%d",&naovoador);
	  } if (naovoador== 1 && aves==1){
	  	printf("O animal e tropical");
	  	scanf("%d", &tropical);
	  } if (tropical == 1 && naovoador==1 && aves==1){
	  	printf("Entao o animal e um Avestruz");
	  } if (tropical == 0 && naovoador==1 && aves==1){
		printf("O seu animal e polar");
		scanf("%d",&polar);			
	  } if (polar==1 && aves==1){
	  	printf("Entao o animal e o pinguim");
	  } if (naovoador == 0 && mamifero== 0 && aves==1){
	  	printf("O seu animal e nadador");
	  	scanf("%d",&nadador);
	  } if (nadador==1 && mamifero==0 && naovoador==0){
	  	printf("O animal e o Pato");
	  } if(nadador == 0 && aves==1){
	  	printf("O seu animal e de rapina");
	  	scanf("%d",&rapina);
	  } if(rapina==1 && mamifero== 0 && aves==1){
	  	printf("Entao o animal e a aguia");
	  }
		if (aves == 0 && mamifero== 0){
			printf("O seu animal e um reptil");
			scanf("%d",&repteis);
	  } if (repteis == 1 && aves==0 && mamifero==0){
	  	printf("O seu animal e um comcasco");
	  	scanf("%d",&comcasco);
	  } if (comcasco==1 && repteis==1 && aves==0 && mamifero==0){
	  	printf("Entao o animal e tartaruga");
	  } if (comcasco==0 && repteis==1){
		printf("O seu animal e carnivoro?");
		scanf("%d", &ca);
	  } if (ca==1 && repteis==1 && aves==0 && mamifero==0){
		printf("Entao o animal e um Crocodilo");
	  } if(ca==0 && repteis ==1 && aves==0 && mamifero==0 && comcasco== 0){
		printf("O seu animal e Sem pata");
		scanf("%d",&sempatas);
 	  } if (sempatas== 1 && repteis==1 && aves==0 && mamifero==0){
		printf("Entao o animal e uma Cobra");
	  } if (repteis==0 && aves== 0 && mamifero==0){
		printf("Nao foi possivel encontrar o animal");
	  }

 }
	
	
	
	
	
	
	
	
