#include <stdio.h>

float somaDePonteiro(float *v, int n){
  float soma = 0;
  for(int i = 0; i < n; i++){
    soma += *(v+i); 
  }
  return soma;
}

int UsandoSomaDePonteiro(){
  float v[3] = {2.5,1.5,3.0};
  int n = 3;
  printf("\nSoma de ponteiro: %.1f\n", somaDePonteiro(v,n));
}