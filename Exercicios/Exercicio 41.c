//Desenvolva um programa que mostre na tela a seguinte contagem:100 95 90 85 80 ... 0 Acabou!
#include <stdio.h>

int main(void) {
  int i;
for (i=100;i>=0;i=i-5){
  printf("\n%d",i);
  }
  printf("\nAcabou!!");
  return 0;
}
