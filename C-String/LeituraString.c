#include <stdio.h>
#include <string.h> 
#include <ctype.h>

int comprimentoString(char v[]){
  return strlen(v);
}

void inversaoString(char v[]){
  printf("Inversao de string %s\n para: ", v);
  for(int i = comprimentoString(v); i >= 0; i--){
    printf("%c", v[i]);
  }
}

void concatenacaoString(char v[], char w[])
{
  int i = 0, j = 0;
  char resultado[comprimentoString(v)+comprimentoString(w)];
  while (v[i] != '\0') {
    resultado[i] = v[i];
    i++;
  }
  while (w[j] != '\0') {
    resultado[i] = w[j];
    i++;
    j++;  
  }
  printf("\n\nConcatenacao de string\n%s", resultado);
}

void transformarMaiuscula(char v[]){
  printf("\n\nString maiuscula\n");
  for(int i = 0; i < comprimentoString(v); i++){
    printf("%c",toupper(v[i]));
  }
}

int posicaoString(char b,char w[])
{
  for(int i = 0; i < comprimentoString(w); i++){
    if(w[i] == b){
      printf("\nPosicao: %d\n", i);
      return 1;
    }
  }
  return 0;     
}

int OcorrenciaString(char b,char w[])
{
  int ocorrencias = 0;
  for(int i = 0; i < comprimentoString(w); i++){
    if(w[i] == b){
      ocorrencias++;
    }
  }
  return ocorrencias;     
}

int mainLeitura(void){
  char v[15];
  char senha[15] = "amarela a casa";
  printf("Qual a sua senha? ");
  fgets(v, sizeof(v), stdin);
  
  v[strcspn(v, "\n")] = '\0'; 
  senha[strcspn(senha, "\n")] = '\0'; 
  
  printf("Depois: Oi %s %s!\n",v, senha);
  
  strcmp(v, senha) == 0? printf("Acesso liberado\n") :        printf("Acesso negado\n");
  
  inversaoString(senha);
  concatenacaoString(v, senha);
  posicaoString('m', senha);
  transformarMaiuscula(senha);
  printf("\nVezes que 'a' se repete: %d",OcorrenciaString('a', senha));
  return 0;
}


