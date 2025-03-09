#include <stdio.h>

int Temperatura(void)
{
	float Fahrenheit, Celcius;
	printf("Informe quantos graus Fahrenheit: \n");
	scanf("%f",&Fahrenheit);
	Celcius = ((Fahrenheit - 32) * (5.0/9.0));
	printf("%.1f Fahrenheit em Celcius: %.1f\n", Fahrenheit, Celcius);
	return 0;
}
