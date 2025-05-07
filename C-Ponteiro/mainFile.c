#include <stdio.h>

void Troca(int *p, int *g){
  int aux = *p;
  *p = *g;
  *g = aux;
}

void apreendendo(){
  int v = 5, *p;
  p = &v;
  printf("Valor de v: %d\n", v);
  *p = *p + v;
  printf("Valor de p: %d\n", *p);
  printf("Endereco de v: 0%p\n", &v);
}

void UsandoTroca(){
  int a = 6, b = 10;
  Troca(&a, &b);
  printf("\na = %d b = %d\n", a, b);
}

void MinMax(int v[], int n, int *min, int *max){
  *min = *max = v[0];
  for(int i = 1; i < n; i++)
    if(*min > v[i]) *min = v[i];
    else if(*max < v[i]) *max = v[i];
  
}

void UsandoMinMax(){
  int v[5] = {26,55,89,14,77};
  int min, max;
  MinMax(v,5,&min,&max);
  printf("Minimo: %d\nMaximo: %d\n", min, max);
}

void cadeiaLiteral(){
  int v[3] = {55, 70, 46};
  printf("\nEndereco de \"Cadeia literal\": %p\n", v);
  printf("Endereco de \"Cadeia literal\": %d\n", *v);
  printf("Endereco de \"Cadeia literal + 2\": %p\n", v+2);
  printf("Endereco de \"Cadeia literal + 2\": %d\n", *(v+2));
}


void Exibir(int *p, int n){
  for(int i = 0; i < n; i++)
    printf("\n%d ", *(p+i));
  
}

void usandoExibe(){
  int v[3] = {55, 70, 46};
  Exibir(v, 3);
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


int Len(char *n){
  char *i = n;
  while(*n){
    n++;
  }
  return n-i;
}

void usandoLen(){
  printf("\n%d: ", Len("Ola mundo"));
}

void ponteiro(){
  int *p;
  p = NULL;
  printf("\n%d %p", p,p);
}

void funcaoComParametroInfinito(int n, ...){
  printf("\n%d", n);
}

void usandoFuncaoComParametroInfinito(){
  funcaoComParametroInfinito(3, 1, 2, 3);
}

int f(char x, int y){
  
}
00000000
int main (void){
  
  apreendendo();
  UsandoTroca();
  UsandoMinMax();
  cadeiaLiteral();
  usandoExibe();
  usandoPutstr();
  usandoLen();
  ponteiro();
  usandoFuncaoComParametroInfinito();
  return 0;
}