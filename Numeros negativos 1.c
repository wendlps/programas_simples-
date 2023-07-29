#include <stdio.h>

int main(void) {

float num1, num2, num3, num4, num5;
int negativo = 0;

printf ("Escreva um numero: \n");
  scanf ("%f", &num1);
    if (num1<0)
      negativo = negativo + 1;
printf ("Escreva um numero: \n");
  scanf ("%f", &num2);
    if (num2<0)
      negativo = negativo + 1;
printf ("Escreva um numero: \n");
  scanf ("%f", &num3);
    if (num3<0)
      negativo = negativo + 1;
printf ("Escreva um numero: \n");
  scanf ("%f", &num4);
    if (num4<0)
      negativo = negativo + 1;
printf ("Escreva um numero: \n");
  scanf ("%f", &num5);
    if (num5<0)
      negativo = negativo + 1;
printf ("São %d numeros negativos", negativo);
  
  return 0;
}