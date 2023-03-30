#include <stdio.h>

int main(void) {
  float distancia,km,passagem1,passagem2;
  printf("\nQual distancia você deseja pecorrer (km)? ");
  scanf("%f",&distancia);
  passagem1=distancia * 0.50;
  passagem2=distancia *0.45;
  if (distancia<=200)
    printf("\nSua passagem custa R$ %f", passagem1);
  else
    printf("\nSua passagem custa R$ %f", passagem2);
  return 0;
}
