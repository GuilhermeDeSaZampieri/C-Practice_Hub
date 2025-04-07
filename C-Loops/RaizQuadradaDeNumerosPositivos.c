
/*
12:
Dado um numero real não negativo, informe a sua raiz quadrada
O programa deve rejeitar a entrada, enquanto não for digitado
um número real não negativo
*/
#include <stdio.h>
#include <math.h>
int RaizPositiva (void)
{
    float d = 0.0;
    do
    {
        printf("Informe um numero nao negativo\n");
        scanf("%f", &d);
    }while(d < 0);
    
    printf("A raiz quadrada de %.2f corresponde a %.2f ", d, sqrt(d));
    return 0;
}
