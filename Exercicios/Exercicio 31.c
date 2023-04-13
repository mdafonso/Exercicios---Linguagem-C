//Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
  int jogador,computador;
  
  printf("\n1. PEDRA");
  printf("\n2. PAPEL");
  printf("\n3. TESOURA");
  printf("\nDigite a opção desejada: ");
  scanf("%d",&jogador);

  switch(jogador){

    case 1:
    printf("\nJogador escolheu: PEDRA");
    break;
  
    case 2:
    printf("\nJogador escolheu: PAPEL");
    break;
  
    case 3:
    printf("\nJogador escolheu: TESOURA");
    break;}



   srand(time(NULL));
   computador = ("%d",rand()%3+1);


  switch(computador){

    case 1:
    printf("\nComputador escolheu: PEDRA");
    break;
  
    case 2:
    printf("\nComputador escolheu: PAPEL");
    break;
  
    case 3:
    printf("\nComputador escolheu: TESOURA");
    break;}


  if(jogador==computador){
    printf("\nEMPATE");}
  else if((jogador==1&&computador==3)||(jogador==2&&computador==1)|| 
  (jogador==3&&computador==2)){
    printf("\nJOGADOR VENCEU");}
  else 
    printf("\nCOMPUTADOR VENCEU");
  
  

  
  
  return 0;
}
