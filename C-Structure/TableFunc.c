#include <stdio.h>
#include <string.h>

typedef struct data{
  int dia;
  int mes;
  int ano;
}d;

typedef struct funcionario{
  int codigo;
  char nome[30];
  float salario;
  d dataNascimento;
}Func;


void ExibirFuncionarios(Func f[], int n)
{
  for(int i = 0; i < n; i++){
    printf("|%d|%s|%.2f|%d/%d/%d|\n", f[i].codigo, f[i].nome, f[i].salario, f[i].dataNascimento.dia, f[i].dataNascimento.mes, f[i].dataNascimento.ano);
  }
}

void OrdernarCodigo(Func f[], int n){
  for(int i = 1; i <= n-1; i++){
    for(int j =0; j<n-1; j++){
      if( f[j].codigo > f[j+1].codigo){
        Func aux = f[j];
        f[j] = f[j+1];
        f[j+1] = aux;
      }
    }
  }
}

void OrdenarNome(Func f[], int n){
  for(int i = 1; i <= n-1; i++){
    for(int j =0; j<n-1; j++){
      if( strcmp(f[j].nome,f[j+1].nome)>0){
        Func aux = f[j];
        f[j] = f[j+1];
        f[j+1] = aux;
      }
    }
  }
}

void OrdenarSalario(Func f[], int n){
  for(int i = 1; i <= n-1; i++){
    for(int j =0; j<n-1; j++){
      if( f[j].salario < f[j+1].salario){
        Func aux = f[j];
        f[j] = f[j+1];
        f[j+1] = aux;
      }
    }
  }
}

int numData(d data){return data.ano*10000+data.mes*100+data.dia;}

void OrdenarData(Func f[], int n){
  for(int i = 1; i <= n-1; i++){
    for(int j =0; j<n-1; j++){
      if( numData(f[j].dataNascimento) > numData(f[j+1].dataNascimento)){
        Func aux = f[j];
        f[j] = f[j+1];
        f[j+1] = aux;
      }
    }
  }
}

float totalSalario(Func f[], int n){
  float total = 0;
  for(int i = 0; i < n; i++){
    total += f[i].salario;
  }
  return total;
}


int mainTableFunc(){
  Func f[] = {{561,"Eva Maranhao",9200.00,{2,7,2012}},
  {295,"Ana Teixeira",6100.00,{5,9,2015}},
  {473,"Denise Lagoa",8500.00,{1,6,2013}},
  {102,"Catia Telles",7300.00,{3,8,2014}},
  {384,"Beatriz Lira",5400.00,{4,9,2016}}};

  ExibirFuncionarios(f, 5);
  printf("\n\n");
  OrdernarCodigo(f, 5);
  ExibirFuncionarios(f, 5);
  printf("\n\n");

  OrdenarSalario(f,5);
  ExibirFuncionarios(f, 5);
  printf("\n\n");

  OrdenarNome(f,5);
  ExibirFuncionarios(f, 5);
  printf("\n\n");

  OrdenarData(f,5);
  ExibirFuncionarios(f, 5);
  printf("\n\n");
  printf("Total salario: %.2f", totalSalario(f, 5));

  return 0;
}
