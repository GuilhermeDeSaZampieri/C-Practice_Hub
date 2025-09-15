#include <stdio.h>
#include "pilha.h"

void OrdenacaoCre(){
  int n = 0, i = 0;
  printf("Informe o tamanho da pilha: ");
  scanf("%d", &n);

  Pilha a = pilha(n);
  Pilha b = pilha(n);

  printf("Informe os numeros da pilha:");
  
  while(i<n){
    int v = 0;
    scanf("%d", &v);
    empilhap(a, v);
    i++;
  };
  

  while(!vaziap(a)){
    int val = desimpilhap(a);

    while(!vaziap(b) && topop(b) > val){
        empilhap(a, desimpilhap(b));
    }

    empilhap(b, val);
  }

  printf("\nA Esta vazia e B Esta preenchida!\n");
  
  while (!vaziap(b)) {
    empilhap(a, desimpilhap(b));
  }

  printf("Pilha A ordenada:\n");
  while (!vaziap(a)) {
    printf("%d\n", desimpilhap(a));
  }

  destroip(&a);
  destroip(&b);  
}