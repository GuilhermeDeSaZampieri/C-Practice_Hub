/*
O quadrado de um número natural

n é igual à soma dos

n primeiros ímpares
consecutivos. Com base nessa ideia, crie um programa que, dado um número
natural
n, calcula e exibe o quadrado de
n.

Por exemplo: 5
2 =
1 +
3 +
5 +
7 +
9 = 25
*/
#include <stdio.h>

int QuadradoPerfect (void)
{
	int d, quadrado, impar = 1;
	printf("Informe um numero:  ");
	scanf("%d", &d);
	for(int i = 0 ; i < d; i++){
		quadrado += impar;
		impar += 2 ;
		printf("%d\n", quadrado); 
	}
	printf("O quadrado perfeito de %d corresponde a: %d ",d,quadrado);
	return 0 ;	
}
