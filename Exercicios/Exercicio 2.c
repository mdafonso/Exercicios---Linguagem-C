#include <stdio.h>

int main(void) 
{
char nome[50],sobrenome[50];
  
  //MOSTRAR MENSAGEM PARA O USUARIO 
 printf("Qual é o seu nome?\n");
  //RECEBER MENSAGEM DO USUARIO 
 scanf("%s%s", &nome,&sobrenome);
 // MOSTRA MENSAGEM AO USUARIO
 printf("\nOlá %s %s,é um prazer te conhecer!", nome, sobrenome);
  
  return 0;
}
