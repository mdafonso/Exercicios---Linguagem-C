//Crie um programa que leia duas notas de um aluno e calcule a sua média, mostrando uma mensagem no final, de acordo com a média atingida: - Média até 4.9: REPROVADO,- Média entre 5.0 e 6.9: RECUPERAÇÃO,- Média 7.0 ou superior: APROVADO
#include <stdio.h>

int main(void) {
  float nota1,nota2,media;
  printf("\nInforme a primeira nota: ");
  scanf("%f",&nota1);
  printf("\nInforme a segunda nota: ");
  scanf("%f",&nota2);

  media =(nota1+nota2)/2;
  if(media>=7)
    printf("\nAPROVADO");
  if(media<=4.9)
    printf("\nREPROVADO");
  else
    printf("\nRECUPERAÇÃO");
      
  return 0;
}
