//crie um programa para exibir a tabela-verdade do operador ||.
#include <stdio.h>

int TabelaVerdade(void)
{
	printf("0 || 0 == %d\n",0 || 0);
	printf("0 || 1 == %d\n",0 || 1);
	printf("1 || 0 == %d\n",1 || 0);
	printf("1 || 1 == %d\n",1 || 1 );

	return 0;
}
