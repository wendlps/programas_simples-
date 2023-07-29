#include <stdio.h>

int main(void) {

float a;
int positivo=0;
printf ("Escreva um numero: \n");
scanf ("%d", &a);
  if (a>0)
    positivo ++;

printf ("Escreva um numero: \n");
scanf ("%d", &a);
  if (a>0)
    positivo ++;
      
printf ("Escreva um numero: \n");
scanf ("%d", &a);
  if (a<0)
    positivo ++;

printf ("Escreva um numero: \n");
scanf ("%d", &a);
  if (a>0)
    positivo ++;

printf ("Escreva um numero: \n");
scanf ("%d", &a);
  if (a>0)
    positivo ++;

printf ("%d numeros positivos", positivo);
  
  return 0;
}