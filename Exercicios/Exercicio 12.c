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
