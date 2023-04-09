#include <stdio.h>

int main(void) {
  int valori, valorf,in;
  
  printf("\nDigite o primeiro valor: ");
  scanf("%d",&valori);
  printf("\nDigite o último valor: ");
  scanf("%d",&valorf);
  printf("\nDigite o incremento: ");
  scanf("%d",&in);

  while (valori<valorf)
  {  
     printf("\n %i",valori);
     valori=valori+in;
  }

  while (valori>valorf)
  {  
     printf("\n %i",valori);
     valori=valori-in;
  }


  
  return 0;
}
