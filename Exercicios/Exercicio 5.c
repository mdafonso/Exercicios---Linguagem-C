//Faça um programa que leia as duas notas de um aluno em uma matéria e mostre na tela a sua média na disciplina.Ex: Nota 1: 4.5,Nota 2: 8.5,A média entre 4.5 e 8.5 é igual a 6.5
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
