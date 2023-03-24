#include <stdio.h>
#include <stdlib.h>


int main(void) {
  float nota1, nota2, media;
  
  printf("\nNota 1: ");
  scanf("%f",&nota1);
  printf("\nNota 2: ");
  scanf("%f",&nota2);
  
  media = (nota1 + nota2)/2;
  printf("\nA média entre %f e %f é igual a: %f", nota1, nota2, media);

  if(media>=7){
    printf("\nAprovado");}
  else if(media>=5){
    printf("\nRecuperação");}
  else {
    printf("\nReprovado");}     
    
  
  
  
  return 0;
}
