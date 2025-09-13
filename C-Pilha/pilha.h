#ifndef PILHA_H
#define PILHA_H

typedef struct pilha *Pilha;

Pilha pilha(int capacidade);
Pilha empilhap(Pilha p, int dado);
int topop(Pilha p);
int desimpilhap(Pilha p);
int vaziap(Pilha p);
int cheiap(Pilha p);
void destroip(Pilha *p);
#endif