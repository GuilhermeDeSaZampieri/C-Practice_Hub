#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1 - Intercalação de sequencia ordenadas(merge)

//Linked list
//Is a sequence of nodes composted of item and a pointer to the next node
//interessante File Allocation Table (FAT)


typedef int ItemNode;
typedef struct no{
  ItemNode item;
  struct no *prox;
} *Lista;

Lista no(ItemNode x, Lista prox){
  Lista n = malloc(sizeof(struct no));
  n->item = x;
  n->prox = prox;
  return n;
}

void exibeLista(Lista l){
  printf("\n[ ");
  while(l){
    l->prox ? printf("%d, ", l->item) : printf("%d", l->item);
    l = l->prox;
  }
  printf("] ");
}

Lista range(int n){
  Lista l = NULL;
  while(n-- > 0) l = no(n,l);
  return l;
}

Lista randList(int n, int k){
  Lista l = NULL;
  while(n-- > 0) l = no(rand() % k, l);
  return l;
}

//Exercicio 4
int tamanho(Lista l){
  int t = 0;
  while(l){
    t++;
    l = l->prox;
  }
  return t;
}

//Exercicio 5
int Soma(Lista l){
  int t = 0;
  while(l){
    t+= l->item;
    l = l->prox;
  }
  return t;
}

//Exemplo 9
void destroi(Lista *l){
  while(*l){
    Lista n = *l;
    *l = n->prox;
    free(n);
  }
}

void vetorDinamico(void);
void usandoAlocacaoDinamica(void);
void usandoMerge(void);

int main(void){
  srand(time(NULL));
  Lista I = range(10);
  Lista R = randList(rand() %10, 100);

  usandoMerge();
  usandoAlocacaoDinamica();
  //vetorDinamico();
  exibeLista(I);
  exibeLista(R);
  
  printf("\nTamanho da lista: %d\n", tamanho(R));
  printf("\nSoma da lista: %d\n", Soma(R));
  return 0;
  
}

