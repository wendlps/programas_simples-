#include <stdio.h>

int main(void) {
int num1, num2, num3, maior, menor;
  
scanf ("%d", &num1);
scanf ("%d", &num2);
scanf ("%d", &num3);

  if (num1 > num2 && num1 > num3 && num2 > num3)
  {
maior = num1;
menor = num3;
    }  
  
  if (num1 < num2  && num2<num3 && num3>num1)
{
maior = num3;
menor = num1;
}

  if (num1 < num2  && num2 > num3 && num1 < num3 )
{
maior = num2;
menor = num3;
}

  if (num1 > num2  && num2 < num3 && num1 < num3 )
{
maior = num3;
menor = num2;
}

  if (num1 > num2  && num2 > num3 && num1 > num3 )
{
maior = num1;
menor = num2;
}

  if (num1 < num2  && num2 > num3 && num1 < num3 )
{
maior = num2;
menor = num1;
}  
printf ("maior é: %d, menor é: %d", maior, menor);
  return 0;
}