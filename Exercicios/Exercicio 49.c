//Crie um programa que leia 6 números inteiros e no final mostre quantos deles são pares e quantos são ímpares.
#include <stdio.h>

int main(void) {
  
 int num,i,pares=0,impares=0;
  printf("\n digite 6 números inteiros: ");
    scanf("%d",&num);

  for(i=1;i<=6;i++)
    {
    
    if(num%2==0)
    pares++;
    else
    impares++;
    }
   printf("\n Quantidade de numeros pares: %d ",pares);
   printf("\n Quantidade de numeros impares: %d ",impares);
  
  
  
  
  return 0;
}
