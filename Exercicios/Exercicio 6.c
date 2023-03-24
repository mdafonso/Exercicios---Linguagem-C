#include <stdio.h>
#include <stdlib.h>>

int main(void) {
  //ESCREVER AS VARIAIS QUE VOU UTILIZAR
    int n, antecessor, sucessor;
  // RECEBER NÚMERO
  printf("Didite um número: ");
  // INSERIR NÚMERO
  scanf("%d", &n);

  antecessor = n - 1;
  sucessor = n + 1;

  // MOSTRA ANTECESSOR E SUCESSOR
  printf("\nO antecessor de %d é %d", n, antecessor);
  printf("\nO sucessor de %d é %d", n, sucessor);
  
  
  return 0;
}
