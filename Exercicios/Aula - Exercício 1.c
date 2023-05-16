//Faça um Programa que leia um vetor de 5 números inteiros e mostre-os.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int num[5],i;
  //looping para gerar e guardar valores em vetor
  for (i=0;i<5;i=i+1){
    //i++
    printf("\nDigite Um Número: ");
    scanf("%d",&num[i]);
  }
  //looping para mostrar valores de um vetor
  for (i=0;i<5;i++){
    printf("\nNúmero (%d): %d",i,num[i]);}

  return 0;
}
