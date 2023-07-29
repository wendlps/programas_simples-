#include <stdio.h>

int main(void) {

int num1, num2, maior, menor, subtracao;
scanf ("%d", &num1);
scanf ("%d", &num2);

  if (num1>num2)
maior = num1;
menor = num2;
  if (num1<num2)
maior = num2;
menor = num1;

subtracao = maior-menor;
  printf ("%d", subtracao);
  
  return 0;
}