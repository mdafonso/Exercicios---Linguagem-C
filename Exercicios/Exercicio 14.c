//A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva um programa que pergunte a quantidade de Km percorridos por um carro alugado e a quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar,sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado.
#include <stdio.h>

int main(void) {
  float km,dias,diasutilizados, kmrodados, servico;
  printf("\nQuantos dias você alugou o carro ? ");
  scanf("%f",&dias);
  printf("\nQuantos km o carro pecorreu ? ");
  scanf("%f",&km);

  diasutilizados = 90 * dias;
  kmrodados = 0.20 * km;
  servico = diasutilizados + kmrodados;

  printf("\nO aluguel do carro ficou:R$ %f", servico);
  

  return 0;
}
