/*Crie uma fun��o para calcular a raiz quadrada aproximada r, de um n�mero real n�o negativo x,
usando o seguinte m�todo proposto por Newton:
1o Chute um valor inicial para r igual a x/2.
2o Caso o valor absoluto de (r2-x) seja inferior a 0.001, devolva r como resposta.
3o Caso contr�rio, fa�a r = ( r2+x)/(2r) e volte ao 2o passo.
Al�m da fun��o que calcula a raiz, crie tamb�m as fun��es que calculam o valor absoluto e o quadrado
de um n�mero real e fa�a um programa principal para testar seu funcionamento.*/

#include <stdio.h>
#include<stdbool.h>
#include<math.h>


float sqr (double a){
	return a * a;
}

bool passo (double r, int a)
{
	return (sqr(r)-a) < 0.001;
	
}


float raizQuadradaNewton (int a){
	float r = a /2.0;

	while(!passo(r,a)){
		r = (sqr(r)+a)/(2*r);
	}
	return r;
	
}



int mainDaRaiz (void){

	float raiz = raizQuadradaNewton(10);
	float quadrado = sqr(10);
	printf("A raiz quadrada: %.3f\nQuadrado de um numero: %.2f\n", raiz, quadrado);
	return 0;

}
