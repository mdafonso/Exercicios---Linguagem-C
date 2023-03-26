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
