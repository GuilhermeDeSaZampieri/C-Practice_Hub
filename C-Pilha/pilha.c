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
  p->topo = 0;
  p->dados = (int)*malloc(capacidade*sizeof(int));
  return p;
}