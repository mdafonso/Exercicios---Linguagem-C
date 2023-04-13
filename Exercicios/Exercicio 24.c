//Faça um algoritmo que pergunte a distância que um passageiro deseja percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km para viagens até 200Km e R$0.45 para viagens mais longas.
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
