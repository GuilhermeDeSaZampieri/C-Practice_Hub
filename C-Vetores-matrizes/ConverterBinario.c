#include <stdio.h>

void binario(int n){
    int v[8*sizeof(int)], i = 0;
    do{
      v[i++] =  n % 2;
      n /= 2;
    }while(n > 0);
    
    
    while(i >0 ){
      printf("%d", v[--i]);
    }
}

int mainBinario (void){

    int n;
    printf("Numero:\n");
    scanf("%d", &n);
    binario(n);
    printf("\n");
    return 0;

}