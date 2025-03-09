#include <stdio.h>

int Media(void)
{
	float a, b, media;
	printf("Informe as duas notas dos alunos:\n");
	scanf("%f %f", &a, &b);
	media = (a + b) / 2;
	printf("A nota do aluno foi %.2f\n", media);
	return 0;
}
