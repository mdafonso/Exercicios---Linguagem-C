#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
  char genero[10];
  float satual,tt,snovo;

  printf("\nQual o gênero do funcionário (feminino) ou (masculino)? ");
  scanf("%s",genero);
  printf("\nQual o sálario do funcionário? R$ ");
  scanf("%f",&satual);
  printf("\nA quanto anos o funcionário trabalha na empresa? ");
  scanf("%f",&tt);

  
  //FEMININO
  if (strcmp(genero,"feminino")==0){
  if (tt<15) {
   snovo=satual+(satual*0.05);
   printf("\nSálario Atual do Funcionário? R$ %0.2f",snovo);
  }
  if (tt==15 && tt<=20){
   snovo=satual+(satual*0.12);
   printf("\nSálario Atual do Funcionário? R$ %0.2f",snovo);
  }
  if (tt>20){
   snovo=satual+(satual*0.23);
   printf("\nSálario Atual do Funcionário? R$ %0.2f",snovo);
  }}

  //MASCULINO
  else if (strcmp(genero,"masculino")== 0){
  if (tt<20){
   snovo=satual+(satual*0.03);
   printf("\nSálario Atual do Funcionário? R$ %0.2f",snovo);
  }
  if (tt==20 && tt<=30){
   snovo=satual+(satual*0.13);
   printf("\nSálario Atual do Funcionário? R$ %0.2f",snovo);
  }
  if (tt>30){
   snovo=satual+(satual*0.25);
   printf("\nSálario Atual do Funcionário? R$ %0.2f",snovo);
  }}





  
  return 0;
}
