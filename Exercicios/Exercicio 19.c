//Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua média e mostre na tela. No final, analise a média e mostre se o aluno teve ou não um bom aproveitamento (se ficou acima da média 7.0).
#include <stdio.h>
#include <string.h>

int main(void){ 
  char nome[15],sobrenome[20];
  float nota1,nota2,media;

  printf("\nNome do aluno:");
  scanf("%s%s",nome,sobrenome);
  printf("\nNOTA 1 = ");
  scanf("%f",&nota1);
  printf("\nNOTA 2 = ");
  scanf("%f",&nota2);

  media = (nota1+nota2)/2;

  if (media>=7)
    printf("\n----- %s %s foi Aprovado -----",nome,sobrenome);
  else
    printf("\n----- %s %s foi Reprovado -----",nome,sobrenome);
  
  
  
  return 0;
}
