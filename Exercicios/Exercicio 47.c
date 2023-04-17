//Desenvolva um aplicativo que mostre na tela o resultado da expressão 500 + 450 + 400 + 350 + 300 + ... + 50 + 0
#include <stdio.h>

int main(void) {
  int contador=500,soma=0;
  while(contador>=0){ 
  printf("\n%i",contador);
    soma=soma+contador;
    contador=contador-50;}

  printf("\nSOMA = %i",soma);

  
  return 0;
}
