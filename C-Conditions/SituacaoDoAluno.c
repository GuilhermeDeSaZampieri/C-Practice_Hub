//Dadas as duas notas de prova de um aluno, informe se ele está aprovado ou reprovado. Con-
//sidere que a média mínima necessária para aprovação é 6.0.
#include <stdio.h>

int SituacaoAluno(void)
{
	float a,b, media;
	printf("Informe as duas notas:");
	scanf("%f %f", &a,&b );
	media = (a+b) / 2;
	if(media >= 6.0)printf("\nAluno aprovado com nota: %.2f\n", media);
	else printf("\nAluno Reprovado com nota: %.2f\n", media);
	

	return 0;
}
