#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int jogador,computador;
  
 
  printf("\nDigite um número inteiro entre (1)e(5): ");
  scanf("%d",&jogador);

  switch(jogador){

    case 1:
    printf("\nJogador escolheu: 1");
    break;
  
    case 2:
    printf("\nJogador escolheu: 2");
    break;
  
    case 3:
    printf("\nJogador escolheu: 3");
    break;
  
    case 4:
    printf("\nJogador escolheu: 4");
    break;
  
    case 5:
    printf("\nJogador escolheu: 5");
    break;}



   srand(time(NULL));
   computador = ("%d",rand()%5+1);


  switch(computador){

    case 1:
    printf("\nComputador escolheu: 1");
    break;
  
    case 2:
    printf("\nComputador escolheu: 2");
    break;
  
    case 3:
    printf("\nComputador escolheu: 3");
    break;
  
    case 4:
    printf("\nComputador escolheu: 4");
    break;
  
    case 5:
    printf("\nComputador escolheu: 5");
    break;}


  if(jogador==computador){
    printf("\nEMPATE");}
  else if((jogador==1&&computador==3)||(jogador==2&&computador==1)|| 
  (jogador==3&&computador==2)){
    printf("\nJOGADOR VENCEU");}
  else
    printf("\nCOMPUTADOR VENCEU");
  
    printf("\nERRO, Digite um número inteiro entre (1)e(5) ");
    
  return 0;
}
