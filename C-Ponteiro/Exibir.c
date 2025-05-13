#include <stdio.h>

void Exibir(int *p, int n){
  for(int i = 0; i < n; i++)
    printf("\nExibir %d ", *(p+i));

}

void UsandoExibir(){
  int v[3] = {55, 70, 46};
  Exibir(v, 3);
}