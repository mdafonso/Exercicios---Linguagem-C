#include <stdio.h>

int main(void) {
  //ESCREVER VARIAVEIS A UTILIZAR
  
  float n, dobro, terco;
  //RECEBER NÚMERO 
  printf("\nDigite um número: ");
  //INSERIR NÚMERO
  scanf("%f",&n);

  dobro = n * 2;
  terco = n / 3;

  //MOSTRAR MENSAGEM
  printf("\n O dobro de %f é:  %f", n, dobro);
  printf("\n O terço de %f é:  %f", n, terco);
  
  return 0;
}
