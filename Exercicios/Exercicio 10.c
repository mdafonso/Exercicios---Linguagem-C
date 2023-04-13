//Faça um algoritmo que leia a largura e altura de uma parede, calcule e mostre a área a ser pintada e a quantidade de tinta necessária para o serviço,sabendo que cada litro de tinta pinta uma área de 2metros quadrados.
#include <stdio.h>

int main(void) {
  // INSERIR VARIAVEIS
  float largura, altura, area, tinta;
  //MOSTRAR MENSAGEM
  printf("\nQual a largura da sua parede? ");
  scanf("%f", &largura);
  printf("\nQual a altura da sua parede? ");
  scanf("%f", &altura);

  area = largura * altura;
  tinta = area * 2;

  //MOSTRAR MENSAGEM
  printf("\nsua área corresponde a : %fm2  e precisa de %f litros de tinta", area, tinta);

  
  return 0;
}
