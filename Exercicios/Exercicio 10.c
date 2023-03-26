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
