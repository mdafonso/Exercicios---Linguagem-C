//Faça um programa que solicite o nome do usuário e imprima-o na vertical e mostre o nome em formato de escada.
#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[31];
  int i,tam;
  
  printf("\n Escreva seu nome: ");
  scanf("%s", nome);
	
	tam = strlen(nome);
	
	for (i=0; i <= tam; i++)
	{
		printf("%.*s\n",i,nome);
	}
	
	
  return 0;
}
