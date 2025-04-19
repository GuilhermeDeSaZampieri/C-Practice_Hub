/*Crie a função recursiva cr(n) que exiba
a contagem regressiva de n>= 0 até 1*/
#include <stdio.h>

float cr(int n) {
  if (n < 0) return 1;
  else {
    printf("%d\n", n);
    return cr(n-1);
  }
}


int mainCr(void) {
  int n;
  printf("Num? ");
  scanf("%d",&n);
  printf("%.d\n",cr(n));
  return 0;
}