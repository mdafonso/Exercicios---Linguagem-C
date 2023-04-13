//Crie um programa que leia o tamanho de três segmentos de reta.Analise seus comprimentos e diga se é possível formar um triângulo com essas retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento de cada lado deve ser menor que a soma dos outros dois.
#include <stdio.h>

int main(void) {
  float reta1,reta2,reta3;
  printf("\nQual o valor da reta 1 ? ");
  scanf("%f", &reta1);
  printf("\nQual o valor da reta 2 ? ");
  scanf("%f", &reta2);
  printf("\nQual o valor da reta 3 ? ");
  scanf("%f", &reta3);
  if (reta1<reta2+reta3&&reta2<reta1+reta3&&reta3<reta1+reta2)
    
    printf("\n----- É possivel forma um triângulo -----");

  else  
    printf("\n----- Não é possivel forma um triângulo -----");
    
  

  
  return 0;
}

    //OUTRA FORMA MAS EXPECIFICA DE TRIÂNGULO
   
    int a, b, c;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");
}//
