#include <stdio.h>

void apreendendo(){
  int v = 5, *p;
  p = &v;
  printf("Valor de v: %d\n", v);
  *p = *p + v;
  printf("Valor de p: %d\n", *p);
  printf("Endereco de v: 0%p\n", &v);
}

void cadeiaLiteral(){
  int v[3] = {55, 70, 46};
  printf("\nEndereco de \"Cadeia literal\": %p\n", v);
  printf("Endereco de \"Cadeia literal\": %d\n", *v);
  printf("Endereco de \"Cadeia literal + 2\": %p\n", v+2);
  printf("Endereco de \"Cadeia literal + 2\": %d\n", *(v+2));
}



void Putstr(char *s){
  while(*s){
    putchar(*s);
    s++;
  }
}
void usandoPutstr(){
  char *s = "\nOla mundo";
  Putstr(s);
}

void ponteiro(){
  int *p;
  p = NULL;
  printf("\n%d %p", p,p);
}



/*
void UsandoMinMax(void);
void UsandoTroca(void);
void UsandoExibir(void);
void UsandoLen(void);
void UsandoSomaDePonteiro(void);
void UsandoFuncaoComParametroInfinito(void);
void UsandoOrdenarTabela(void);

int main (void){
  
  apreendendo();
  UsandoTroca();
  UsandoMinMax();
  cadeiaLiteral();
  UsandoExibir();
  usandoPutstr();
  UsandoLen();
  ponteiro();
  UsandoFuncaoComParametroInfinito();
  UsandoSomaDePonteiro();
  UsandoOrdenarTabela();
  return 0;
}
*/