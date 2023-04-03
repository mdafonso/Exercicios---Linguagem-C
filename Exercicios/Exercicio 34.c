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
