/*Suponha que o perfil de uma pessoa possa ser determinado pela sua data de nascimento (como
exemplificado a seguir). Dada uma data de nascimento, informe o perfil correspondente.
Data de nascimento: 13/06/1970
1o passo: 1306 + 1970 = 3276
2o passo: 32 + 76 = 108
3o passo: 108 5
-105 21
3*/
#include <stdio.h>
int DataFace(void) {
	int dia, mes, ano;
	printf("Informe seu dia mes e ano de nascimento");
	scanf("%d %d %d",&dia, &mes, &ano);
	dia = dia * 100 + mes;
	mes = dia + ano;
	ano = (mes / 100) + (mes-(mes/100)*100);

	if(ano % 5 == 0){
		printf("Perfi timido");
	}
	else if(ano % 5 == 1){
		printf("Perfil Sonhador");
	}
	else if(ano % 5 == 2){
		printf("Perfil Paquerador");
	}
	else if(ano % 5 == 3){
		printf("Perfil Atraente");
	}	
	else if(ano % 5 == 4){
		printf("Perfil Irresistível");
	}
	return 0;
}
