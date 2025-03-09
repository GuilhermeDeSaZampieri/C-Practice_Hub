#include <stdio.h>

int QtdBytes (void) 
{ 
	int a; 
	double b;
	a = 7/2;
	b = 7/2.0;
	printf("O tamanho de 7/2 = %u bytes", sizeof(a));
	printf("\nO tamanho de  7/2.0 =  %u bytes ", sizeof(b)); 
	return 0;
}
