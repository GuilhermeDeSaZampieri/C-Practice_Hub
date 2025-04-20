#include <stdio.h>

int bin(int n) {
  if (n > 0){
    bin(n/2);
    printf("%d",n%2);
  }  
    return 0; 
}

int mainBin() {
  int n;
  printf("Num? ");
  scanf("%d", &n);
  bin(n);
  return 0;
}