/*Dados os coeficientes (a?0, b e c) de uma equação do 2o grau, informe quais são suas raízes
reais (se elas existirem).*/
#include <stdio.h>
#include <math.h>
int Equacao2grau(void)
{
	float a,b,c, delta, r1, r2;
	printf("Venha descobrir as raizes da equacao de 2º grau!\nInforme 3 numeros:");
	scanf("%f %f %f", &a,&b, &c );
	if(a != 0){
		delta = (b*b) - 4*a*c;
		if(delta < 0){
			printf("\nDelta = %.2f, nao existem raizes\n", delta);
		}
		else{
			r1 = ((-b)-(sqrt(delta)))/(2*a);
			r2 = ((-b)+(sqrt(delta)))/(2*a);
			printf("\nDelta = %.2f\nAs raizes da equacao sao: \nraiz1 = %.2f \nraiz2 = %.2f\n", delta, r1,r2);
		}
		
	}else printf("A deve ser diferente de 0!\n");


	return 0;
} 
