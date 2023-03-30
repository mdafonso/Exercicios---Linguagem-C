#include <stdio.h>

int main(void) {
  int n1,n2;
  printf("\nInforme um número inteiro:");
  scanf("%i",&n1);
  printf("\nInforme outro número inteiro:");
  scanf("%i",&n2);

  if(n1>n2)
    printf("\nO primeiro valor é maior");
  if(n2>n1)
    printf("\nO segundo valor é maior");
  if(n1==n2) 
    printf("\nNão existe valor maior, os dois são iguais");
    
      
  return 0;
}
