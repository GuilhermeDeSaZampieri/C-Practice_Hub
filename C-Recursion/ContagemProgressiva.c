/*Crie a função recursiva cp(n) que exiba
a contagem progressiva de 1 até n >= 0*/
#include <stdio.h>

int cp(int n) {
  if (n < 0) return 1;
  else {
    printf("%d", ((n) + cp(n-1)));
  }
}


int mainCp(void) {
  int n;
  printf("Num? ");
  scanf("%d",&n);
  printf("%.d\n",cp(n));
  return 0;
}