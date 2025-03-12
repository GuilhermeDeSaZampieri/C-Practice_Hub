/*Usando comandos if-else, faça um programa para ler o número da placa de um veículo
(sem as letras) e informar em que dia da semana ele deve estar no rodízio.*/
#include <stdio.h>
int Rodizio(void) {
	int placaCarro, n1;
	printf("Informe sua placa do carro formato '1111':");
	scanf("%d", &placaCarro);
	n1 = placaCarro % 10;
	

	if(n1 == 1 || n1 == 2){
		printf("Segunda-feira\n");
	}
	else if(n1 == 3 || n1 == 4){
		printf("Terca-feira\n");
	}
	else if(n1 == 5 || n1 == 6){
		printf("Quarta-feira\n");
	}
	else if(n1 == 7 || n1 == 8){
		printf("Quinta-Feira\n");
	}	
	else if(n1 == 9 || n1 == 0){
		printf("Sexta-feira\n");
	}
	return 0;
}
