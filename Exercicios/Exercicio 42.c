//Faça um algoritmo que pergunte ao usuário um número inteiro e positivo qualquer e mostre uma contagem até esse valor:Ex: Digite um valor: 35, Contagem: 1 2 3 4 5 6 7 ... 33 34 35 Acabou!
#include <stdio.h>

int main(void) {
  int i,valor;
  printf("\nDigite um valor inteiro e positivo: ");
  scanf("%d",&valor);

   for(i=1;i<=valor;i++){
     printf("\n%d",i);
  }
     printf("\nAcabou!!");
  
  
  return 0;
}
