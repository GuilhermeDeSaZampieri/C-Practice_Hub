#include <stdio.h>

int par(int n) {
  if (n > 1) par(n-2);
  else
    return n;
}
int mainPar() {
  int n;
  printf("Num? ");
  scanf("%d", &n);
  par(n) == 1? printf("Numero impar") : printf("Numero par");
  return 0;
}