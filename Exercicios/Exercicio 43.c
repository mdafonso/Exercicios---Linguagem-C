#include <stdio.h>

int main(void) {
   int contador=30; 

      
    while (contador>=1){  
     printf("\n%i",contador);
     contador--;
      
      if (( contador % 4 ) == 0){
      printf("\n[%i]",contador);} 
    }
        
     
  return 0;
}
