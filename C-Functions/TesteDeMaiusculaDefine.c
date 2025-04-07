//Teste de Maiuscula:
#include <ctype.h>
#include <stdio.h>
#define maiuscula(c) (c == toupper(c)) 
int TesteDeMaiuscula (void)
{
	char x;
	printf("Caractere? ");
	scanf("%c",&x);
	printf("Maiuscula: %s\n",maiuscula(x) ? "sim" : "nao");
	return 0;
}
