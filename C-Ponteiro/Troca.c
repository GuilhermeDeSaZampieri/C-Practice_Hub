#include <stdio.h>

void Troca(int *p, int *g){
  int aux = *p;
  *p = *g;
  *g = aux;
}

void UsandoTroca(){
  int a = 6, b = 10;
  Troca(&a, &b);
  printf("\nTroca: a = %d b = %d\n\n", a, b);
}
