#include <stdio.h>
#include "pilha.h"
#include <string.h>

void Inverter(){
  char frase[] = "apenas um teste";
  Pilha p = pilha(strlen(frase));
  
  for(int i = 0; i < strlen(frase); i++)
  {
    if(frase[i] == ' '){
      while(!vaziap(p)){
        printf("%c", desimpilhap(p));
      }
      printf(" ");
    }
    else{
      empilhap(p,frase[i]);
    }
  }

  while(!vaziap(p)){
    printf("%c", desimpilhap(p));
  }
  printf("\n");

   destroip(&p);
}