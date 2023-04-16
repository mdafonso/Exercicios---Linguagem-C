//Faça um algoritmo que mostre na tela a seguinte contagem: 10 9 8 7 6 5 4 3 Acabou!
#include <stdio.h>

int main(void) {
  int i;

  for(i=10;i>=3;i--){
     printf("\n%d",i);
  }
     printf("\nAcabou!!");

  
  return 0;
}
