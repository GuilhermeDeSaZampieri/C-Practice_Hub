/*Dados o n�mero de faltas e a m�dia de um aluno, informe se ele est� aprovado ou reprovado.
Considere que a aprova��o requer no m�ximo 5 faltas e no m�nimo m�dia 6.0. Use uma condi��o
composta por um operador l�gico e exiba as poss�veis situa��es em cores distintas.*/
#include <conio.h>
#include <stdio.h>

int AlunoAprovado (void)
{
	float a,b, media;
	int faltas;
	printf("Informe as duas notas:\n");
	scanf("%f %f", &a,&b );
	printf("Informe quantas faltas o aluno possui:\n");
	scanf("%d", &faltas);
	media = (a+b) / 2;
	if(media >= 6.0 && faltas <= 5){
		_textcolor(9);
		printf("\nAluno aprovado com nota: %.2f\nE %d faltas\n", media, faltas);
	}
	else{
		_textcolor(12);
		printf("\nAluno Reprovado com nota: %.2f\nE %d faltas\n", media,faltas);
	}

	
	return 0;
}
