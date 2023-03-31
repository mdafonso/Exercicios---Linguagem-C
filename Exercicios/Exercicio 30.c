#include <stdio.h>

int main(void) {
  

  float a,b,c;
  printf("\nQual o valor da reta 1 ? ");
  scanf("%f", &a);
  printf("\nQual o valor da reta 2 ? ");
  scanf("%f", &b);
  printf("\nQual o valor da reta 3 ? ");
  scanf("%f", &c);
  
  
  
  if (a == b == c)
    printf("Equilatero\n");
  if (a == b || a == c || b == c)
    printf("Isosceles\n");
  if (a != b != c != a)
    printf("Escaleno\n");
  else
    printf("Os 3 lados não formam um triângulo!\n");
    
    
  return 0;
}
  
