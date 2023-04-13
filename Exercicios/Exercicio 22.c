//Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua situação em relação ao alistamento militar.- Se estiver antes dos 18 anos, mostre em quantos anos faltam para o alistamento.,- Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do alistamento.


#include <stdio.h>

int main(void) {
  int ano,nascimento,alistamento,idade;
  printf("\nEm qual ano você nasceu? ");
  scanf("%i",&nascimento);
  printf("\nEm qual ano estamos? ");
  scanf("%i",&ano);
  
  idade = ano - nascimento;
  alistamento = idade - 18;

  if (alistamento >= 18){   
    printf("\nVocê já passou %i anos do alistamento", alistamento);}
  if (alistamento == 0) {
    printf("\njá pode se alistar");}
  else
  if (alistamento < 18){
    printf("\nAinda falta %i anos para você de alistar", alistamento);}
  
    
  
  return 0;
}
