#include <stdio.h>

int main(void) {
  int largura,comprimento,area;
  printf("\nInforme a largura: ");
  scanf("%d",&largura);
   printf("\nInforme o comprimento: ");
  scanf("%d",&comprimento);

  area = comprimento * largura;

  if (area<=100)
    printf("\n--- Terreno Popular ---");
  if (area>=500)
    printf("\n--- Terreno Vip ---");
  else if (area<500 && area>100)
    printf("\n--- Terreno Master ---");
  
  return 0;
}
