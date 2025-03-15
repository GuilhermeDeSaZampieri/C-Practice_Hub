/*
 Dados um numero real x e um numero natural n calcule e exiba a potencia de x^n
.*/
#include <stdio.h>

int Fatorial (void)
{
	int x, resu = 1;
	printf("Informe 1 numero:  ");
	scanf("%d", &x);
	for(int i = x ; i > 0; i--){
		resu *= i;
	}
	printf("O fatorial de  %d  corresponde a: %d ",x,resu);
	return 0 ;	
}
