#include <stdio.h>

int valida(int d, int m, int a){
	if(d > 0 && d < 30 && m >0 && m < 13 && a > 0)
	{
		return 1;
	}
	else{return 0;}
}

int bissexto(int a){
	if(a % 4 == 0){
		return 1;
	}else{return 0;}
}

int ultimo_dia(int m, int a){
	if(m == 2){
		if(bissexto(a) == 1){return 29;}
		if(bissexto(a) == 0){return 28;}
	}
	if(m == 1 || m== 3 || m==5 ||m==7 || m==8 || m==10 || m==12){return 31;}
	else{return 30;}
	
}


void exibe_ds(int d, int m, int a){
	d++;
	if(d>ultimo_dia(m,a)){
		d = 1;
		m++;
		if(m>12){
			m=1; 
			a++;
		}
	}
	printf("Proximo dia: %d/%d/%d\n",d, m, a);
}


int main (void){

	int dia, mes, ano;
	printf("Digite uma data: Dia/mes/ano");
	scanf("%d/%d/%d", &dia, &mes,&ano);
	if (valida(dia,mes,ano) == 1){
		printf("Data valida\n");
		printf("Ultimo dia: %d\n",ultimo_dia(mes,ano));
		printf("Ano bissexto: %d\n", bissexto(ano));
		exibe_ds(dia, mes, ano);
	}
	else{ printf("Data nao e valida\n");}


}
