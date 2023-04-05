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
