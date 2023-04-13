//Escreva um programa para calcular a redução do tempo de vida de um fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule quantos dias de vida um fumante perderá e exiba o total em dias.
#include <stdio.h>

int main(void) {
  int horas, quantidadediaria, quantidadetotal, anos, dias;
  printf("\nQuantos cigarros você fuma por dia? ");
  scanf("%d",&quantidadediaria);
  printf("\nA quantos anos você fuma? ");
  scanf("%d",&anos);
  
  quantidadetotal = quantidadediaria *(365*anos);
  horas = quantidadetotal * 0.10;
  dias = horas / 24;
  
  printf("\nVocê perdeu %d dias da sua vida.", dias);
  

  
  return 0;
}
