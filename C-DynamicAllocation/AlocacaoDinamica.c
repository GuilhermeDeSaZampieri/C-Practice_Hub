#include <stdio.h>
#include <stdlib.h>

//Alocacao dinamica
void AlocacaoDinamica(){
  int *p;
  //malloc retorna um ponteiro para o inicio da memoria alocada
  p = malloc(sizeof(int));
  *p = 5;
  printf("Valor de p: %d\n", *p);
}

void AlocacaoDinamicaFree(){
  int *p = malloc(sizeof(int));
  *p = 5;
  free(p); //libera a memoria alocada
  p = NULL;
  printf("Valor de p: %p\n", p);

}

void usandoAlocacaoDinamica(){
  AlocacaoDinamica();
  AlocacaoDinamicaFree();
}