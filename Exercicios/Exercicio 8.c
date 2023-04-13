//Desenvolva um programa que leia uma distância em metros e mostre os valores relativos em outras medidas.Ex:Digite uma distância em metros: 185.72, A distância de 85.7m corresponde a:0.18572Km,1.8572Hm,18.572Dam,1857.2dm,18572.0cm,185720.0mm
#include <stdio.h>

int main(void) {
  //INSERIR VARIAVEIS A UTILIZAR

  float km, hm, dam, m, dm, cm, mm;
  //MOSTRAR MENSAGEM
  printf("\nDigite uma distância em metros: ");
  //RECEBER MEDIDA
  scanf("%f",&m);

  km = m / 1000;
  hm = m / 100;
  dam = m / 10;
  dm = m * 10;
  cm = m * 100;
  mm = m * 1000;

  //MOSTRAR MENSAGEM
  printf("\nA distancia de %f corresponde a: ", m);
  //RECEBER MEDIDA E MOSTRAR
  printf("\n\n%f km", km);
  printf("\n%f hm", hm);
  printf("\n%f dam", dam);
  printf("\n%f dm", dm);
  printf("\n%f cm", cm);
  printf("\n%f mm", mm);
  
  
  return 0;
}
