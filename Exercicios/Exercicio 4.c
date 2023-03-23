#include <stdio.h>
#include <stdlib.h>
int main(void) {

  // VARIAVEIS 
  int a, b, soma;
  
  // MOSTRAR AO USUARIO 
  printf("\nDigite um valor: ");
  // INSERIR VALOR DO USUARIO
  scanf("%d", &a);
  // MOSTRAR AO USUARIO
  printf("\nDigite outro valor: ");
  // INSERIR VALOR DO USUARIO
  scanf("%d", &b);

  soma = a + b;
  
  // MOSTRAR MENSAGEM FINAL AO USUARIO
  printf("\nA soma entre %d e %d é igual a: %d ", a, b, soma);
  


  
  return 0;
}
