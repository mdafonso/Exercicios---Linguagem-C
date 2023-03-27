#include <stdio.h>

int main(void) {
  float velocidade, multa;
  printf("\nQual a velocidade do carro (km)? ");
  scanf("%f",&velocidade);

  multa = velocidade *5;
  
  if (velocidade>80)
  {
    printf("\nO motorista foi multado em:R$ %f ", multa);
  } 
  else 
    {
    printf("\nO motorista não foi multado.");
    }
  return 0;
}
