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
