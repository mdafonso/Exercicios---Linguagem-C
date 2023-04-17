//Crie um algoritmo que leia o valor inicial da contagem, o valor final e o incremento, mostrando em seguida todos os valores no intervalo: Ex: Digite o primeiro Valor: 3,Digite o último Valor: 10,Digite o incremento: 2,Contagem: 3 5 7 9 Acabou!
#include <stdio.h>

int main(void) {
  int valori, valorf,in;
  
  printf("\nDigite o primeiro valor: ");
  scanf("%d",&valori);
  printf("\nDigite o último valor: ");
  scanf("%d",&valorf);
  printf("\nDigite o incremento: ");
  scanf("%d",&in);

  while (valori<valorf)
  {  
     printf("\n %i",valori);
     valori=valori+in;
  }
    
  return 0;
}


         
