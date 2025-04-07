/*
13
Simule o funcionamento de um caixa eletrônico, que oferece as seguintes opções ao cliente:
1 – depósito, 
2 – saque, 
3 – saldo e
4 – sair. Suponha que o saldo inicial do cliente é de R$ 1000,00
e que ele não pode ficar negativo (se o usuário tentar efetuar um saque maior que o saldo corren-
te, a operação não deve ser efetuada e o usuário deve ser informado).
*/
#include <locale.h>
#include <stdio.h>
int CashMachine(void)
{
	setlocale(LC_CTYPE, "BR"); 

    float saldo = 1000, sacar, deposito;
    int escolha;
    do
    {
        printf("Escolha entre:\n1 - depóstio\n2 - saque\n3 - saldo\n4 - sair\n");
        scanf("%d",&escolha);
        switch (escolha)
        {
            case 1: 
                printf("Quanto você deseja depositar?\n");
                scanf("%f", &deposito);
                saldo += deposito;
                break;
            case 2:
                printf("Quanto você deseja sacar?\n");
                scanf("%f", &sacar);
                saldo -= sacar;
                break;
            case 3:
                printf("Seu saldo: R$ %.2f \n", saldo);
                break;
            case 4:
                break;
			default:
				printf("Opção não encontrada\n");
				break;
        }
    }while(escolha != 4 && saldo > 0 );
    
    printf("Muito obrigado, o seu saldo atual: R$ %.2f\n", saldo);
    return 0;
}
