//Dado um número natural conte de n até 0

#include <stdio.h>

int Contar (void)
{
	int d;
	scanf("%d", &d);
	for(int i = d; i >=0; i--){
		printf("%d\n", i);

	}
	return 0 ;	
}
