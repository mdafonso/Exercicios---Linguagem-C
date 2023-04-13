//Escreva um programa para aprovar ou não o empréstimo bancário para a compra de uma casa. O programa vai perguntar o valor da casa, o salário do comprador e em quantos anos ele vai pagar. Calcule o valor da prestação mensal, sabendo que ela não pode exceder 30% do salário ou então o empréstimo será negado.
#include <stdio.h>

int main(void) {
  float salario,valorcasa,anos,prestacao,possopagar;
  printf("\nQuanto você recebe? R$ ");
  scanf("%f",&salario);
  printf("\nQual o valor da casa R$ ");
  scanf("%f",&valorcasa);
  printf("\nEm quantos anos você gostaria de pacelar essa casa? ");
  scanf("%f",&anos);

  possopagar = salario * 70/100;

  prestacao = valorcasa/(anos*12);
  
    if (prestacao>possopagar)
      printf("\n---- Empréstimo negado ----");
  
    else
      printf("\n---- Empréstimo aprovado ----");

  
  return 0;
}
