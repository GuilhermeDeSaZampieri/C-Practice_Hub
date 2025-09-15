#include <stdio.h>
#include <string.h>

typedef struct Livro{
  char titulo[50];
  char autor[50];
  int ano;
} Livro;

void recebeLivro(Livro *l){
  printf("Digite o titulo: ");
  fgets(l->titulo, sizeof(l->titulo), stdin);
  l->titulo[strcspn(l->titulo, "\n")] = 0;

  printf("Digite o autor: ");
  fgets(l->autor, sizeof(l->autor), stdin);
  l->autor[strcspn(l->autor, "\n")] = 0;

  printf("Digite o ano: ");
  scanf("%d", &l->ano); 
 
  while (getchar() != '\n');
}

void printLivro(Livro l){
  printf("Titulo: %s\nAutor: %s\nAno: %d\n", l.titulo, l.autor, l.ano);
}

void mainLivro(void){
  Livro l;
  recebeLivro(&l);
  printLivro(l);
}
