//Um programa de vida saudável quer dar pontos atividades físicas que podem ser trocados por dinheiro. O sistema funciona assim:- Cada hora de atividade física no mês vale pontos - até 10h de atividade no mês: ganha 2 pontos por hora- de 10ha é 20h de atividade no mês: ganha 5 pontos por hora- acima de 20h de atividade no mês: ganha 10 pontos por hora- A cada ponto ganho, o cliente fatura R$0,05 (5 centavos) ,Faça um programa que leia quantas horas de atividade uma pessoa teve por mês, calcule e mostre quantos pontos ela teve e quanto dinheiro ela conseguiu ganhar.
#include <stdio.h>

int main(void) {
  float p,f,h;
  printf("\nQuantas horas de atividade fisica você fez esse mês? ");
  scanf("%f",&h);
 
  
  if (h<=10){
    p=2*h;
    f=p*0.05;
  printf("\nTOTAL DE PONTOS: %0.2f",p);
  printf("\nTOTAL FATURADO: %0.2f",f);}
  
  if (h>10 && h==20){
    p=5*h;
    f=p*0.05;
  printf("\nTOTAL DE PONTOS: %0.2f",p);
  printf("\nTOTAL FATURADO: %0.2f",f);}
  
   if (h>20){
    p=10*h;
    f=p*0.05;
  printf("\nTOTAL DE PONTOS: %0.2f",p);
  printf("\nTOTAL FATURADO: %0.2f",f);}
  
  return 0;
}
