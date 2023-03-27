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
