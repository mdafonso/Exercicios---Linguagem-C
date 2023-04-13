//O Índice de Massa Corpórea (IMC) é um valor calculado baseado na altura e no peso de uma pessoa. De acordo com o valor do IMC, podemos classificar o indivíduo dentro de certas faixas. - abaixo de 18.5: Abaixo do peso - entre 18.5 e 25: Peso ideal - entre 25 e 30: Sobrepeso - entre 30 e 40: Obesidade - acima de 40: Obseidade mórbida ,Obs: O IMC é calculado pela expressão peso/altura² (peso dividido pelo quadrado da altura)
#include <stdio.h>

int main(void) {
  float imc,altura,peso;
  printf("\nQual sua altura? ");
  scanf("%f",&altura);
  printf("\nQual seu peso (kg)? ");
  scanf("%f",&peso);

  imc=peso/(altura*altura);

  if (imc>40)
    printf("\n---- Obesidade Mórbida ----");
  if (imc<40 && imc>30)  
    printf("\n---- Obesidade ----");
  if (imc<30 && imc>25)
    printf("\n---- Sobrepeso ----");
  if (imc<25 && imc>18.5)
    printf("\n---- Peso ideal ----");
  else if (imc<18.5)
    printf("\n---- Abaixo do Peso ----");
  return 0;
}
