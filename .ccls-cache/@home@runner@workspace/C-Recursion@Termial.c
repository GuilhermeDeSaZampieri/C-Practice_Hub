/*Crie a função recursiva termial(n)
que calcula a soma dos n primeiros
numeros naturais (n>=0)*/

#include <stdio.h>

float termial(int n) {
  if (n == 0)
    return 1;
  else {
    return n + termial(n - 1);
  }
}

int mainTermial() {
  int n;
  printf("Num? ");
  scanf("%d", &n);
  printf("Termial = %d\n", termial(n));
  return 0;
}