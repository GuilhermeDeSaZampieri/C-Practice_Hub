/*Dado o salário de um funcionário, informe o
valor de Imposto de Renda a ser recolhido.
Considere as alíquotas na tabela ao lado..*/
#include <stdio.h>

int ImpostoDeRenda(void)
{
	float salario, novoSalario;
	int aliquota;
	printf("Quanto voce recebe?");
	scanf("%f",&salario );
	if(salario <= 1903.98){
		aliquota = 1;
	}
	else if(salario > 1903.98 && salario <= 2826.65){
		aliquota = 7.5;
	}
	else if(salario > 2826.65 && salario <= 3751.05){
		aliquota = 15;
	}
	else if(salario > 3751.05 && salario <= 4664.68){
		aliquota = 22.5;
	}
	else{
		aliquota = 27.5;
	}
	novoSalario = salario-(salario * (aliquota*0.01));	
	printf("\nO seu Salario apos os impostos = R$%.2f com aliquota de %d%%\n", novoSalario,aliquota);


	return 0;
} 
