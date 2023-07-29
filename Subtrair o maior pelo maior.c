#include <stdio.h>

int main(void) {

int num1, num2, subtracao;
scanf ("%d", &num1);
scanf ("%d", &num2);

  if (num1>num2)
subtracao = (num1 - num2);
  if (num1<num2)
subtracao = (num2 - num1);
  printf ("%d", subtracao);
  return 0;
}