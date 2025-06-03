#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct data{
  int dia;
  int mes;
  int ano;
}d;

typedef struct funcionario{
  int idade;
  char nome[10];
  float salario;
  d dataNascimento;
}Funcionario;
  

void reajuste(Funcionario f){ //Parametro por valor, não muda o valor da variavel original
  f.salario += 1000;
  printf("Salario: %.2f\n", f.salario);
}

void reajustePonteiro(Funcionario *f){
  f->salario += 1000;
} //Parametro por referencia, muda o valor da variavel original



int mainStructType(){
  Funcionario f1 = {20, "Joao" ,1000.0, {10,10,2005}};
  printf("Nome: %s\nIdade: %d\nSalario: %.2f\nData nascimento: %d/%d/%d ",f1.nome, f1.idade, f1.salario, f1.dataNascimento.dia, f1.dataNascimento.mes, f1.dataNascimento.ano);

  Funcionario f2;
  printf("\n\nDigite sua idade: "); scanf("%d%*c", &f2.idade);
  printf("Digite seu nome: "); scanf("%s", &f2.nome); 
  printf("Nome: %s\nIdade: %d\n",f2.nome, f2.idade);

  reajuste(f1);
  printf("Salario valor: %.2f\n", f1.salario);
  reajustePonteiro(&f1);
  printf("Salario Ponteiro: %.2f\n", f1.salario);

  return 0;


  
}






