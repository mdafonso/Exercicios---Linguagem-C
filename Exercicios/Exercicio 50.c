//Desenvolva um programa que faça o sorteio de 20 números entre 0 e 10 e mostre na tela: a) Quais foram os números sorteados / b) Quantos números estão acima de 5 / c) Quantos números são divisíveis por 3.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int numeros[20],i;
  srand(time(NULL));// inicializa o gerador de números aleatórios

  for(i=0;i<20;i++) {
    numeros[i]= rand() % 11;//resto da divisao por 11 garante que o número seja entre 0 e 10
  }
  for(i=0;i<20;i++) {
    printf("\nNúmeros sorteados: %d",numeros[i]);}
   
  for(i=0;i<20;i++){
  if (numeros[i]>5)
    printf("\nNúmeros maiores que 5: %d", numeros[i]);
  }

  for(i=0;i<20;i++){
  if (numeros[i]%3==0){
    printf("\nNúmeros divisíveis por 3: %d", numeros[i]);}
  }
  
 
  
  return 0;
}
