#include <stdio.h>
#include <stdlib.h>

//Vetor dinamico
void leia(float v[], int n){
  for(int i = 0; i < n; i++){
    printf("\nDigite: [%d]: ", i+1);
    scanf("%f", &v[i]);
  }
}
float media(float v[], int n){
  float soma = 0;
  for(int i = 0; i < n; i++)
    soma += v[i];
  return soma/n;
}
void vetorDinamico(){
  int n;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  float *v = malloc(n * sizeof(float)); //cria o vetor
  leia(v,n);
  printf("Media: %.2f\n", media(v,n));
}