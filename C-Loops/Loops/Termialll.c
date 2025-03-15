/*O termial de um número natural

n é igual à soma dos

n primeiros naturais positivos (por definição,

o termial de
0 é 0
*/
#include <stdio.h>

int Termial(void){
	
	int d, termial;
	printf("Informe um numero");
	scanf("%d", &d);
	for(int i = d; i > 0; i--){
		termial += i;	
	}

	printf("O termial de %d corresponde a: %d\n", d, termial);
	return 0;
	}
