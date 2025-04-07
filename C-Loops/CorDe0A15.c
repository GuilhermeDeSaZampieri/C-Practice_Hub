//Exibir um texto em todos os tipos de cores:
#include <conio.h>
#include <stdio.h>

int TextoCores (void)
{
	for(int c = 0; c <= 15; c++){
		_textcolor(c);
		printf("Cor %d\n", c);

	}
	return 0 ;	
}
