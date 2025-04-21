#include <stdio.h>

void troca(int v[], int i, int j) {
  int x = v[i];
  v[i] = v[j];
  v[j] = x;
}

void bsort(int v[], int n) {
  for (int i = 1; i <= n - 1; i++)
    for (int j = 0; j < n - i; j++)
      if (v[j] > v[j + 1])
        troca(v, j, j + 1);
}

void exibir(int v[], int i) {
  bsort(v, i);
  printf("\nVetor ordenado:\n");
  for (int x = 0; x < i; x++) {
    printf("%d ", v[x]);
  }
  printf("\n");
}

int buscar(int v[], int l){
  int n;
  printf("Informe o numero que deseja buscar:\n");
  scanf("%d", &n);
  for(int i = 0; i < v[l-1]; i++){
    if(v[i] == n){
      printf("Numero encontrado na posicao %d\n", i);
      return 1;
    }}
  return 0;
}

int mainOrdenacao() {
  int i;
  printf("Ordenacao por troca\n");
  printf("Diga o tamanho do vetor:\n");
  scanf("%d", &i);

  int v[i];
  for (int x = 0; x < i; x++) {
    printf("Informe um numero:\n");
    scanf("%d", &v[x]);
  }

  exibir(v, i);
  buscar(v, i) == 1 ? printf("Numero encontrado\n") : printf("Numero nao encontrado\n");
  return 0;
}