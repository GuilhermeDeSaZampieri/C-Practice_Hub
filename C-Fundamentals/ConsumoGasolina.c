#include <stdio.h>

int ConsumoCarro(void)
{
	float distanciaKm, GasolinaDisponivel, GasoNecessaria, GasoGasto = 10;
	printf("Informe a distância em Km da viagem e a quantidade de Gasolina que o carro possui: \n");
	scanf("%f %f", &distanciaKm,&GasolinaDisponivel);
	GasoNecessaria = distanciaKm / GasoGasto;
	if(GasoNecessaria > GasolinaDisponivel)
	{
		printf("Complete o tanque com %.1fL",(GasoNecessaria - GasolinaDisponivel));
	}
	else{
		printf("A quantidade de Gasolina esta perfeita!");
	}  
	printf("\nO consumo medio de gasolina do carro:\n %.2fL por Km\n", GasoGasto);
	return 0;
}
