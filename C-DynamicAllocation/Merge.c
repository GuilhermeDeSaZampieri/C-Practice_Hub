#include <stdio.h>
#include <stdlib.h>

int *merge(int v[], int n, int w[], int m){
  int *novo = malloc((n+m)*sizeof(int));
  int i = 0, j = 0, k = 0;
  while(i < n && j < m)
    novo[k++] = v[i] < w[j] ? v[i++] : w[j++];
  while(i < n)
    novo[k++] = v[i++];
  while(j < m)
    novo[k++] = w[j++];
  
  return novo;
}

void usandoMerge(){
  int v[5] = {12,39,61,75,99};
  int w[4] = {28,40,55,81};
  int *p = merge(v,5,w,4);
  for(int i = 0; i < 9; i++)
    printf("%d ", p[i]);
  printf("\n");
  free(p);
}