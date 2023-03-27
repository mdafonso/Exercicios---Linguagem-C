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
