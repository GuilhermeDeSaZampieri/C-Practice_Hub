#include <stdio.h>
#include "pilha.h"

int main(void){
  Pilha P = pilha(8*sizeof(int));
  empilhap(P, 10);
  printf("Minha Pilha: %p\n", P);
  printf("Topo da pilha: %d\n",topop(P));
  desimpilhap(P);
  printf("%d\n", vaziap(P));
  printf("%d\n", cheiap(P));
  
  printf("Topo da pilha: %d\n",topop(P));
  destroip(&P);

  return 0;
}