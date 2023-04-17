//Crie um programa que calcule e mostre na tela o resultado da soma entre 6 + 8 + 10 + 12 + 14 + ... + 98 + 100.
#include <stdio.h>

int main(void) {
  int contador=6,soma=0;

  while (contador<=100){
  printf("\n%i",contador);
    soma= soma+contador;  
    contador=contador+2;
  }
   
   printf("\n\nSOMA = %i",soma);

  
  return 0;
}
