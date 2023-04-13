//Faça um programa que leia a largura e o comprimento de um terreno retangular, calculando e mostrando a sua área em m². O programa também devemostrar a classificação desse terreno, de acordo com a lista abaixo:- Abaixo de 100m² = TERRENO POPULAR,- Entre 100m² e 500m² = TERRENO MASTER,- Acima de 500m² = TERRENO VIP
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
