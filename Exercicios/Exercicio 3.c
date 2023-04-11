//Crie um programa que leia o nome e o salário de um funcionário, mostrando no final uma mensagem.Ex:Nome do Funcionário: Maria do Carmo Salário: 1850,45  O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.
#include <stdio.h>

int main(void) {
  char nome[20], sobrenome[25];
  float salario[20];

  // MOSTRAR NOME DO FUNCIONARIO
  printf("\nNome do Funcionário: ");
  // INSERIR NOME DO FUNCIOANRIO
  scanf("%s%s", &nome,&sobrenome);
  //MOSTRAR SÁLARIO DO FUNCIONARIO
  printf("\nSalário: ");
  // INSERIR SÁLARIO DO FUNCIONARIO
  scanf("%s", &salario);
  //MOSTRAR MENSAGEM AO USUARIO
  printf("\nO funcionário %s %s tem um salário de R$ %s em junho.", &nome, &sobrenome, &salario);
  


  
  return 0;
}
