
#include <stdio.h>

void mainBinario(void);
void mainTempMedia(void);
void mainLab(void);
void mainJogoVelha(void);
void mainOrdenacao(void);

int main(void){
	//mainBinario();
	//mainTempMedia();
	//mainLab();
	//mainJogoVelha();
	mainOrdenacao();
	return 0;
}


/*
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

*/
/*


/*loucura P refere-se ao endere�o
	int v[3] = {10,20,30};
	int w[2] = {40,50};
	v[3] = 60;
	w[-1] = 70;
	for(int i = 0; i<3; i++)printf("%P: %P %d\n", &v[i],v[i], v[i]);
	putchar('\n');
	for(int i = 0; i<3; i++)printf("%P: %P %d\n", &w[i],w[i], w[i]);
	*/

/*




*/



/*//invers�o de sequencia
	int v[5];
	for (int i=0; i<5;i++)
	{
		printf("%do . item ", i+1);
		scanf("%d",&v[i]);
	}
	puts("Opera�o inversa");
	for (int i=4; i>=0;i--)
	{
		printf("%d\n", v[i]);
}*/
