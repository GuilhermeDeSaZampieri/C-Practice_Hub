#include <stdio.h>

int fibo(int n) {
  if (n == 1 || n == 2) { 
    return 1;
  } else { 
    return fibo(n - 1) + fibo(n - 2);
  }

}
int mainFibo() {
  int n;
  printf("Primeiro Num? ");
  scanf("%d", &n);
  printf("O n-ésimo termo de %d em fibonacci é %d",n,fibo(n));
  return 0;
}