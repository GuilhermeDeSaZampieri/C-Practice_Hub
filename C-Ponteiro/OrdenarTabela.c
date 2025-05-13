#include <stdio.h>
#include <string.h>  

typedef struct {
  int cod;
  char nome[50];
  float sal;
} Func;


int Exibe(Func *v, int n)
{
  for(int i=0; i<n; i++)
    printf("%d | %s | %.2f\n", v[i].cod, v[i].nome, v[i].sal);
  return 0;
}

int cmp_c(Func *a, Func *b) { return a->cod - b->cod; }
int cmp_n(Func *a, Func *b) { return strcmp(a->nome, b->nome); }
int cmp_s(Func *a, Func *b) { return a->sal - b->sal; }

void ordena(int (*cmp)(Func *, Func *), Func *v, int n) {
    Func temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (cmp(&v[j], &v[j + 1]) > 0) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int UsandoOrdenarTabela(){
  Func v[5] = {{561,"Eva Maranhao",9200.00},
              {295,"Ana Teixeira",6100.00},
              {473,"Denise Lagoa",8500.00},
              {102,"Catia Telles",7300.00},
              {384,"Beatriz Lira",5400.00}};    

  printf("\nOrdenar por 1-codigo, 2-nome ou 3-salario? ");
  
  switch( getchar() ) {
    case '1': ordena(cmp_c,v,5); break;
    case '2': ordena(cmp_n,v,5); break;
    case '3': ordena(cmp_s,v,5); break;
  }
  
  puts("Tabela ordenada:");
  Exibe(v,5);
  return 0;
}