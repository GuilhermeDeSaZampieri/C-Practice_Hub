//Dada uma expressão composta por dois números reais e um operador aritmético(adicione ':' e 'x'), exiba seu valor.
#include <stdio.h>
int calc(void) {
	float x, y;
	char o;
	printf("Expressao? ");
	scanf("%c %f %f",&o,&x,&y);
	switch( o ) {
		case '+': printf("Valor = %.2f\n",x+y); break;
		case '-': printf("Valor = %.2f\n",x-y); break;
		case '*':
		case 'x':
		case 'X': printf("Valor = %.2f\n",x*y); break;
		case '/':
		case ':': if(y == 0) printf("O divisor nao pode ser igual a 0 !");
				  else printf("Valor = %.2f\n",x/y); break;
		default : printf("Operador invalido: %c\n",o);
	}
	return 0;
}
