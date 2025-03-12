/*Dados o número de faltas e a média de um aluno, informe se ele está aprovado ou reprovado.
Considere que a aprovação requer no máximo 5 faltas e no mínimo média 6.0. Use uma condição
composta por um operador lógico e exiba as possíveis situações em cores distintas.*/
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
