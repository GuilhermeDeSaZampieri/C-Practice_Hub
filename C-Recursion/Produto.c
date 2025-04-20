#include <stdio.h>

int prod(int n, int y, int  z) {
  if(n > 0){
    prod(n-1,y,z+y);
  }else{
     return z;
    }
}
int mainProd() {
  int n, y;
  printf("Primeiro Num? e Segundo Num? ");
  scanf("%d %d", &n, &y);
  printf("%d",prod(n,y, 0));
  return 0;
}