//Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos para todos, mas especialmente para mulheres. Faça um programa que leia nome,sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo que:- Homens ganham 5% de desconto,- Mulheres ganham 13% de desconto
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
