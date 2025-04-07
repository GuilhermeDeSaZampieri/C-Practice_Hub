#include <stdio.h>

int DiaSemanaString (int n)
{
	switch(n) {
        case 1:
            printf("Segunda-feira\n");
            break;
        case 2:
            printf("Terça-feira\n");
            break;
        case 3:
            printf("Quarta-feira\n");
            break;
        case 4:
            printf("Quinta-feira\n");
            break;
        case 5:
            printf("Sexta-feira\n");
            break;
        case 6:
            printf("Sábado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Número inválido\n");
    }
	return 0;
}

int mainDiaSemanaString(void){
	DiaSemanaString(1);
	return 0;
}
