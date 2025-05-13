#include <stdio.h>

int Len(char *n){
  char *i = n;
  while(*n){
    n++;
  }
  return n-i;
}

void UsandoLen(){
  printf("\nLen %d ", Len("Ola mundo"));
}