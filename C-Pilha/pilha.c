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
   printf("Adicionado %d a pilha\n", d);
 }
  else{
    printf("Pilha cheia!zm");
  }
}

int desimpilhap(Pilha p){
  if(p->topo > -1){
    int tirado = p->dados[--p->topo];
    printf("Tirar %d da pilha \n", tirado);
    return tirado;
  }
  printf("Pilha vazia\n");
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
  printf("Pilha destruida com sucesso");
  free((*p)->dados);
  free(*p);
  *p = NULL;
}
