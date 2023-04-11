//Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:Ex:Qual é o seu nome? João da SilvaOlá João da Silva, é um prazer te conhecer!
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
