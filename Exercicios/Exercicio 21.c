#include <stdio.h>

int main(void) {
  int ano;
  printf("\nInforme um ano: ");
  scanf("%i",&ano);

  if(ano % 4 == 0)
    printf("Ele é bissexto");
  else
    printf("Ele não é bissexto");
  return 0;
}
