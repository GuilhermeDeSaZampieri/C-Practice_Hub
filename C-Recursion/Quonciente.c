#include <stdio.h>

int quon(int n, int y, int  z) {
  if(n == 0){
    return z; 
  }else{
    quon(n-y,y,z+1); 
  };
}
int mainQuon() {
  int n, y;
  printf("Primeiro Num? e Segundo Num? ");
  scanf("%d %d", &n, &y);
  printf("%d",quon(n,y, 0));
  return 0;
}