/*
 Dados um numero real x e um numero natural n calcule e exiba a potencia de x^n
.*/
#include <stdio.h>

int Potencia (void)
{
	int x, n, resu = 1;
	printf("Informe 2 numero:  ");
	scanf("%d %n", &x, &n);
	for(int i = 0 ; i <= n; i++){
		resu *= x;
		printf("%d\n", resu); 
	}
	printf("A potencia %d^%d  corresponde a: %d ",x,n,resu);
	return 0 ;	
}
