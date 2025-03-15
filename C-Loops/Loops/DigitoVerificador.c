/*Crie um programa que solicite o numero de uma conta, apartir dela some o valor 
absoluto de seus algarismos / 10 e o resto que sobrar é o digito verificador da conta.*/

#include <stdio.h>

int DigitoVeri(void){
	
	int d,s, veri, cont;
	printf("Informe um numero");
	scanf("%d", &d);
	cont = d;
	while(d > 1)
	{
		s += (d%10);
		d /= 10;
		printf("%d\n", s);
	}
	veri = s%10;
	printf("A conta %d possui digito verificador = %d\n%d-%d\n", cont, veri, cont, veri);
	s
	return 0;
	}
