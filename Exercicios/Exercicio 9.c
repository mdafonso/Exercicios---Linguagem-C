#include <stdio.h>

int main(void) {
  //INSERIR VARIAVEIS
  int real, convenssor;
  //MOSTRA MENSAGEM
  printf("\nQuantos reais você tem na carteira ? R$ ");
  //INSERIR REAIS
  scanf("%d", &real);

  convenssor = real * 3.45;
  
  //MOSTRAR MENSAGEM 
  printf("\nVocê pode comprar: US$ %d", convenssor);

  
  return 0;
}
