#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[25],sobrenome[25];
  float salario,anos,aumento,salario1,salario2,salario3;
  printf("\nQula o nome e sobrenome do funcionário? ");
  scanf("%s %s",nome,sobrenome);
  printf("\nQual o salário do funcionário? ");
  scanf("%f",&salario);
  printf("\nA quantos anos esse funcionário está na empresa? ");
  scanf("%f",&anos);

 salario1 =salario+( salario * 0.20);
 salario2 = salario +(salario * 0.03);
 salario3 = salario +(salario * 0.125);
  
  if (anos>=10)
    printf("\nO salário atual ficou:R$ %0.2f",salario1);
  if (anos<=3)
    printf("\nO salário atual ficou:R$ %0.2f",salario2);
  else if (anos>3 && anos<10)
    printf("\nO salário atual ficou:R$ %0.2f",salario3);
      
  
  return 0;
}
