#include <stdio.h>
#include <math.h>
int Distancia(void)
{
	int xp, yp, xq, yq; 
	float distanciaPontos;
	printf("Informe as cordenadas de (Xp, Xq), (Yp, Yq):\n");
	scanf("%d %d %d %d", &xp, &xq,&yp,&yq);
	distanciaPontos = sqrt(pow((xp - yp),2) + pow((xq - yq),2));
	printf("A distancia entre os pontos (%d,%d) e (%d,%d) = %.1f\n", xp,xq,yp,yq,distanciaPontos);
	return 0;
}
