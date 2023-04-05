#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char categoria[9];
  float km,kmp,kmp1,kml,kml1,totalp,totalp1,totall,totall1,dias,pd,ld;
  printf("\nDias de locação: ");
  scanf("%f",&dias);
  printf("\nCarro popular ou de luxo? ");
  scanf("%s",categoria);
  printf("\nKm rodados? ");
  scanf("%f",&km);

     

   if (strcmp(categoria,"popular")==0){
   if (km<=100){
      pd = dias*90;
      kmp = 0.20*km;
      totalp = pd + kmp;       
     printf("\nTOTAL: %0.2f",totalp);}
  
   if (km>100) {
     pd = dias*90;
     kmp1 = 0.10*km;
     totalp1 = pd + kmp1;
     printf("\nTOTAL: %0.2f",totalp1);}}

  
  
  else if (strcmp(categoria,"luxo")==0){
  if (km<=200)
     ld = dias*150;
     kml = 0.30*km;
     totall = ld + kml;
     printf("\nTOTAL: %0.2f",totall);
  
   if (km>200){
     ld = dias*150;
     kml = 0.25*km;
     totall1 = ld + kml1;
     printf("\nTOTAL: %0.2f",totall1);}}
     
   
  
    
  return 0;
}
