//Dado 2 n�meros informe qual deles � o maior
#include <stdio.h>

int maiorNumero(void)
{
	int a,b;
	printf("Informe 2 numeros:");
	scanf("%d %d", &a,&b );
	if(a > b)printf("\nO numero %d e maior que o numero %d", a,b);
	else printf("\nO numero %d e maior que o numero %d", b,a);
	

	return 0;
}
