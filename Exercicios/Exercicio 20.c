#include <stdio.h>

int main(void) {
  int n;
  printf("\nDigite um número: ");
  scanf("%d",&n);

  if (n % 2 == 0) // % (é igual a divisão), == (retorna true se os dois operandos tiverem o mesmo valor; caso contrário, retorna false)
    printf("\n O valor digitado é par");
  else
    printf("\nO valor é ímpar");
  return 0;
}
