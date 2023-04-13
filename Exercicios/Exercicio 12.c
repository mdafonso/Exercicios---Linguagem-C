//Crie um programa que leia o preço de um produto, calcule e mostre o seu PREÇO PROMOCIONAL, com 5% de desconto.
#include <stdio.h>

int main(void) {
  float produto, desconto, total;
  printf("\nQual o preço do produto? ");
  scanf("%f",&produto);

  desconto = produto * 5/100;
  total = produto - desconto;

  printf("\nPREÇO PROMOCIONAL: %f", total);

  
  return 0;
}
