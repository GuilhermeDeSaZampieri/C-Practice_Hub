/*
Dado um sequencia de numeros cujo ultimo numero é 0,
Informe o maior e menor número da sequência
*/
#include <stdio.h>

int MaxMin(void)
{
    int d = 1, maior, menor, primeiro = 1;
	printf("Digite quantos numeros voce quiser\nPara cancelar digite 0\n");
    do
    {
        printf("Digite um numero\n");
        scanf("%d", &d);
 
		
		if(primeiro){
			menor = maior = d;
			primeiro = 0;
		}

		if(d == 0){
			menor = menor;	
		}else{
			if(d > maior)
		    {
		       maior = d;
		    }
		    else{
		       menor = d;
		    }
		}
	
    }while(d != 0);

    printf("O maior numero: %d O menor numero: %d\n", maior, menor);
    return 0;
}
