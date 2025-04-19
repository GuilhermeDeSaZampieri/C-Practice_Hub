/*Crie a função recursiva pot(x,n)
que calcula a potencia de um numero
real x diferente de 0 elevado a um numero
natural n*/

#include <stdio.h>

float pot(float x, int n) {
  if (n == 0)
    return 1;
  else {
    return x * pot(x, n - 1);
  }
}

int mainPot() {
  float x;
  int n;
  printf("Base e expoente? ");
  scanf("%f %d", &x, &n);
  printf("Pot = %.1f\n", pot(x, n));
  return 0;
}