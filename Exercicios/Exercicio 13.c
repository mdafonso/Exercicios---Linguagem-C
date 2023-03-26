#include <stdio.h>

int main(void) {

  float salario, novosalario, acrescimo; 
  printf("\nInforme seu salário: R$ ");
  scanf("%f",&salario);

  acrescimo  = salario * 15/100;
  novosalario = salario + acrescimo;

  printf("\nSeu salário atual é de: R$ %f", novosalario);
  
  return 0;
}
