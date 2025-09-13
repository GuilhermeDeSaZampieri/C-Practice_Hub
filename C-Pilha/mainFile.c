#include <stdio.h>
#include "pilha.h"

int main(void){
  Pilha P = pilha(8*sizeof(int));
  printf("Pilha %d\n", P);
  return 0;
}