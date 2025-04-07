/*Exercício 1. Brincando de programar em português:

Adicione as diretivas #define necessárias para a compilação do programa a seguir.
#include <stdio.h>
programa
inicio
diga("Oi!");
fim

Adicione as diretivas #define necessárias para a compilação do programa a seguir.
#include <stdio.h>
int main(void) {
printf("Inteiro minimo = %+d\n", MIN_INT);
printf("Inteiro maximo = %+d\n", MAX_INT);
return 0;
}

*/
#include <stdio.h>
#include <limits.h>
#define diga printf("OI\n");
#define r return 0;
#define min printf("Inteiro minimo = %+d\n", INT_MIN);
#define max printf("Inteiro maximo = %+d\n", INT_MAX);


int BrincandoComDefine (void)
{
		diga
		min
		max
		r
}


