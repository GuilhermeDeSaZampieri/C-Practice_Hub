#include <stdio.h>
#include <locale.h>
#include <conio.h>

float Media(float v[]){

	float m = 0;
	for(int i = 0; i < 7 ;i++){
		m += v[i];
	}
	return m/7; 
}

void preenche(float v[]){
	for(int i = 0; i < 7 ;i++){
		printf("%da temperatura?", i+1);
		scanf("%f", &v[i]);
	}

}

int conta(float v[], float m){
	int c = 0;
	for(int i = 0; i < 7 ;i++){
		if(v[i]>m)c++;
	}
	return c;

}

void histograma(float v[],float m){
	char ds[7] = {'D','S','T','Q','Q','S','S'};
	for(int i=0;i<7;i++){
		_textcolor(7);
		printf("\n%c ", ds[i]);
		if(v[i]< m )_textcolor(1);
		else if(v[i] > m)_textcolor(4);
		else _textcolor(2);

		for(int j = 0; j <= v[i]; j++){
			putchar(220);
		}
		putchar('\n');
	}

}

int main(void){
	//setlocale(LC_CTYPE, "BR"); 
	float v[7];
	preenche(v);
	histograma(v,Media(v));
	
	return 0;
}


/*
Exercício 2. Temperatura média

O programa a seguir deve ler as temperaturas registradas diariamente, durante uma se-
mana, e informar em quantos dias a temperatura esteve acima da média para o referido

período. Crie as funções necessárias para a correta execução desse programa.

float Media(float v[]){

	float m = 0;
	for(int i = 0; i < 7 ;i++){
		m += v[i];
	}
	return m/7; 
}

void preenche(float v[]){
	for(int i = 0; i < 7 ;i++){
		printf("%da temperatura?", i+1);
		scanf("%f", &v[i]);
	}

}

int conta(float v[], float m){
	int c = 0;
	for(int i = 0; i < 7 ;i++){
		if(v[i]>m)c++;
	}
	return c;

}

int main (void){
	float v[7];
	preenche(v);
	float m = Media(v);
	printf("Media: %.1f %cC\n", m, 248);
	printf("Dias acima da media: %d\n", conta(v,m));
	
	return 0;
	
}

*/


/*loucura P refere-se ao endereço
	int v[3] = {10,20,30};
	int w[2] = {40,50};
	v[3] = 60;
	w[-1] = 70;
	for(int i = 0; i<3; i++)printf("%P: %P %d\n", &v[i],v[i], v[i]);
	putchar('\n');
	for(int i = 0; i<3; i++)printf("%P: %P %d\n", &w[i],w[i], w[i]);
	*/

/*
	Converter numero para binario:
	void binario(int n){
	
	
	int v[8*sizeof(int)], i = 0;
	do{
		v[i++] =  n % 2;
		n /= 2;
	}while(n > 0);

	
	while(i >0 ){
		printf("%d", v[--i]);
	}

}

int main (void){
	
	int n;
	printf("Numero:\n");
	scanf("%d", &n);
	binario(n);
	printf("\n");
	return 0;

}

*/



/*//inversão de sequencia
	int v[5];
	for (int i=0; i<5;i++)
	{
		printf("%do . item ", i+1);
		scanf("%d",&v[i]);
	}
	puts("Operação inversa");
	for (int i=4; i>=0;i--)
	{
		printf("%d\n", v[i]);
}*/
