/*
Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
  */
 #include<stdio.h>
#include<math.h>
int main(){

  

double a= -1, b=2 , c=2 ;
double delta, descriminante, x1, x2;
  
delta = pow(b,2) - 4 * a * c;

x1 = (-b + sqrt(delta)) / 2 * a;
x2 = (- b - sqrt(delta))/ 2 * a;

  printf("o valor de x1 e: %f o valor de x2 e: %f", x1, x2);
  

  return 0;

}