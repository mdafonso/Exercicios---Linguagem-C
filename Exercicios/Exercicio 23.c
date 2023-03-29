#include <stdio.h>
#include <string.h>

int main(void) {
  float valor, desconto;
  char sexo[2], nome[100];
  printf("\nQual seu nome? ");
  scanf("%s",nome);
  printf("\nQual seu sexo (F/M)?  ");
  scanf("%s",sexo);
  printf("\nQuanto deu sua comprar? ");
  scanf("%f",&valor);
  if (strcmp(sexo,"M") == 0){
   desconto = valor -(valor*0.05);
   printf("\nO valor da sua compra ficou R$%.2f ",desconto);
}

  else if (strcmp(sexo,"F") == 0) {
   desconto = valor -(valor* 0.13);
   printf("\nO valor da sua compra ficou R$%.2f",desconto);
}
   
  
  return 0;
}
