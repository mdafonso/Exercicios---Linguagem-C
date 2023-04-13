//Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.
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
