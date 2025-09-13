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


//Exercicio 2 Cria lista com n elementos en ordem decrescente
Lista range(int n){
  Lista l = NULL;
  while(n-- > 0) l = no(n,l);
  return l;
}

//Exercicio 3 Exibe Lista
void exibeLista(Lista l){
  printf("\n[ ");
  while(l){
    l->prox ? printf("%d, ", l->item) : printf("%d", l->item);
    l = l->prox;
  }
  printf("] ");
}


Lista randList(int n, int k){
  Lista l = NULL;
  while(n-- > 0) l = no(rand() % k, l);
  return l;
}

//Exercicio 4 Verificar tamaho da lista
int tamanho(Lista l){
  int t = 0;
  while(l){
    t++;
    l = l->prox;
  }
  return t;
}


//Exercicio 5 Soma dos elementos da lista
int Soma(Lista l){
  int t = 0;
  while(l){
    t+= l->item;
    l = l->prox;
  }
  return t;
}

//Exemplo 9 Destruir lista
void destroi(Lista *l){
  while(*l){
    Lista n = *l;
    *l = n->prox;
    free(n);
  }
  printf("\nLista destruida\n");
}

//Exercicio 7 Ultimo elemento da lista
int UltimoL(Lista l){
  int last = 0;
  while(l){ 
    last = l->item;
    l = l->prox;
  }
  return last;
}

//Exercicio 8 Pertinencia na lista
int pertence(Lista l, ItemNode x){
  while(l){
    if(l->item == x) return 1;
    l = l->prox;
  }
  return 0;
}

//Exercicio 9 Inverter lista
void InverterLista(Lista l){
  printf("\n[ ");
  int t[tamanho(l)];
  Lista inversor = l;
  int i = 0;
  while(inversor){
    t[i++] = inversor->item;
    inversor = inversor->prox;
  }

  while(i-- >  0)
  {
    i ? printf("%d, ", t[i]): printf("%d", t[i]);

  }   
  printf("] ");
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
  InverterLista(R);
  printf("\n\nTamanho da lista: %d\n", tamanho(R));
  printf("Soma da lista: %d\n", Soma(R));
  printf("Ultimo elemento da lista: %d\n", UltimoL(R));
  printf("Pertinencia na lista: %d\n", pertence(R, 50));

  Exercicio 6 destroy list
  destroi(&I);
  destroi(&R);
  
  return 0;
  
}*/

