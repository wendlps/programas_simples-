#include <stdio.h>

int main(void) {
float num1, num2, num3, num4, num5, num6; // informa os valores positivos
int positivos = 0;
scanf ("%f", &num1);
  if (num1 > 0)
    positivos = positivos + 1;
scanf ("%f", &num2);
  if (num2 > 0)
    positivos = positivos + 1;
scanf ("%f", &num3);
  if (num3 > 0)
     positivos = positivos + 1;
scanf ("%f", &num4);
     if (num4 > 0)
    positivos = positivos + 1;
scanf ("%f", &num5);
     if (num5 > 0)
    positivos = positivos + 1;
scanf ("%f", &num6);
    if (num6 > 0)
    positivos = positivos + 1;
  printf ("tem %d numeros positivos", positivos);
  
  return 0;
}