/*Crie a função minimax(v,n,&min,&max), que guarda nos parâmetros min e
max, respectivamente, o item mínimo e o item máximo de um vetor v com n inteiros.*/
#include <stdio.h>

void MinMax(int v[], int n, int *min, int *max){
  *min = *max = v[0];
  for(int i = 1; i < n; i++)
    if(*min > v[i]) *min = v[i];
    else if(*max < v[i]) *max = v[i];
}

void UsandoMinMax(){
  int v[5] = {26,55,89,14,77};
  int min, max;
  MinMax(v,5,&min,&max);
  printf("Minimo: %d\nMaximo: %d\n", min, max);
}