//Crie um programa que leia o número de dias trabalhados em um mês e mostre o salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25 por hora trabalhada.
#include <stdio.h>

int main(void) {
  float dias, horas, salario;
  printf("\nQuantos dias você trabalhou? ");
  scanf("%f",&dias);

  salario = dias * (25*8);

  printf("\nVocê recebera R$ %f esté mês.", salario);

  return 0;
}
