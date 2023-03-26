#include <stdio.h>

int main(void) {
  float dias, horas, salario;
  printf("\nQuantos dias você trabalhou? ");
  scanf("%f",&dias);

  salario = dias * (25*8);

  printf("\nVocê recebera R$ %f esté mês.", salario);

  return 0;
}
