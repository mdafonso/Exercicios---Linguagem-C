//Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a sua terça parte.Ex: Digite um número: 3.5,O dobro de 3.5 é 7.0,A terça parte de 3.5 é 1.16666
#include <stdio.h>

int main(void) {
  //ESCREVER VARIAVEIS A UTILIZAR
  
  float n, dobro, terco;
  //RECEBER NÚMERO 
  printf("\nDigite um número: ");
  //INSERIR NÚMERO
  scanf("%f",&n);

  dobro = n * 2;
  terco = n / 3;

  //MOSTRAR MENSAGEM
  printf("\n O dobro de %f é:  %f", n, dobro);
  printf("\n O terço de %f é:  %f", n, terco);
  
  return 0;
}
