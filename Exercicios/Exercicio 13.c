//Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o seu novo salário, com 15% de aumento.
#include <stdio.h>

int main(void) {

  float salario, novosalario, acrescimo; 
  printf("\nInforme seu salário: R$ ");
  scanf("%f",&salario);

  acrescimo  = salario * 15/100;
  novosalario = salario + acrescimo;

  printf("\nSeu salário atual é de: R$ %f", novosalario);
  
  return 0;
}
