#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha{
  int topo;
  int capacidade;
  int *dados;
};

Pilha pilha(int capacidade){
  Pilha p = (Pilha)malloc(sizeof(struct pilha));
  p->capacidade = capacidade;
  p->topo = -1;
  p->dados = (int*)malloc(capacidade*sizeof(int));
  return p;
}

Pilha empilhap(Pilha p, int d){
 if(p->topo < p->capacidade+1){
   p->dados[p->topo++] = d;
 }
  else{
    printf("Pilha cheia!");
  }
}

int desimpilhap(Pilha p){
  if(p->topo > -1){
    return p->dados[--p->topo];
  }
  printf("Pilha vazia");
  return -1;
}

int cheiap(Pilha p){
  return p->topo == p->capacidade-1;   
}


int vaziap(Pilha p){
  return p->topo ==-1;
}

int topop(Pilha p){
  if(vaziap(p)){
    puts("Pilha Vazia");
    abort();
  }
  return p->dados[p->topo-1];  
}

void destroip(Pilha *p){
  free((*p)->dados);
  free(*p);
  *p = NULL;
  printf("Pilha destruida com sucesso");
}
