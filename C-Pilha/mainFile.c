#include <stdio.h>
#include "pilha.h"

int main(void){
  Pilha P = pilha(8*sizeof(int));
  empilhap(P, 10);
  printf("Minha Pilha: %p\n", P);
  printf("\nTopo da pilha: %d",topop(P));
  desimpilhap(P);
  printf("\n%d", vaziap(P));
  printf("\n%d", cheiap(P));
  printf("\nTopo da pilha: %d",topop(P));
  destroip(&P);
  
  return 0;
}