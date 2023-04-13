//Desenvolva uma lógica que leia os valores de A, B e C de uma equação do segundo grau e mostre o valor de Delta.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float a, b, c, delta;

  printf("\nDigite o valor de A: ");
  scanf("%f",&a);
  printf("\nDigite o valor de B: ");
  scanf("%f",&b);
  printf("\nDigite o valor de C: ");
  scanf("%f",&c);

  delta = (b * b) - (4 * a * c);

  printf("\nO valor de delta será: %f", delta);


    
  return 0;
}
