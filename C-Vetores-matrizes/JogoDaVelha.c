#include <stdio.h>

#define iguais(a,b,c) ((a != ' ') && (a == b) && (b == c))

int vencedor(char m[3][3]) {
  for(int i = 0; i < 3; i++) {
    if (iguais(m[i][0], m[i][1], m[i][2])) return m[i][0];  
    if (iguais(m[0][i], m[1][i], m[2][i])) return m[0][i]; 
  }
  if (iguais(m[0][0], m[1][1], m[2][2])) return m[0][0];    
  if (iguais(m[0][2], m[1][1], m[2][0])) return m[0][2];    

  return ' ';
}

void exibe(char m[3][3]) {
  for(int i = 0; i < 3; i++) {
    printf(" %c | %c | %c \n", m[i][0], m[i][1], m[i][2]);
    if (i < 2) printf("---|---|---\n");
  }
}

int usuario(char m[3][3]){
  int l,c;
  do{
  
      printf("Informe 2 posicoes\n");
      scanf("%d %d", &l, &c);
      if(l > 2 || c > 2 || l < 0 || c < 0){
        printf("Posicao invalida\n");
        continue;
      }
      else{
      m[l][c] = 'X';
      }
      
    }while(vencedor(m) == ' ');
  
  exibe(m);
  printf("\nVencedor: %c\n", vencedor(m));
  
  return 0;
}

int mainJogoVelha(void) {
  char m[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
  };

  usuario(m);
  return 0;
}