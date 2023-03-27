#include <stdio.h>

int main(void) {
  int ano1, ano2, idade, votar;
  printf("\nQual ano você nasceu? ");
  scanf("%d", &ano1);
  printf("\nEm qual ano estamos? ");
  scanf("%d", &ano2);

  idade = ano2 - ano1;

  if (idade>18)
  {
    printf("\n----- Você já pode votar -----");
  }
  else
  {
    printf("\n----- Você não pode votar -----");
  }
    
  
  return 0;
}
