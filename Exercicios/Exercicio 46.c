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
