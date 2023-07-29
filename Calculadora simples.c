#include <stdio.h>

int main(void) {

int opcao;
float num1, num2, resultado;

printf ("escolha uma das opções: \n opção 1: soma \n opção 2: subtração \n opção 3: multiplicação \n opção 3: divisão\n");
scanf ("%d", opcao);
switch (opcao) {
    
case 1:  
printf ("Escreva o primeiro numero\n");
  scanf ("%f", &num1);
printf ("Escreva o primeiro numero\n");
  scanf ("%f", &num2);
resultado = num1 + num2;
  printf ("%f", resultado);
break;
  
case 2:  
printf ("Escreva o primeiro numero");
  scanf ("%f", &num1);
printf ("Escreva o primeiro numero\n");
  scanf ("%f", &num2);
resultado = num1 - num2;
  printf ("%f", resultado);
break;

case 3:  
printf ("Escreva o primeiro numero");
  scanf ("%f", &num1);
printf ("Escreva o primeiro numero\n");
  scanf ("%f", &num2);
resultado = num1 * num2;
  printf ("%f", resultado);
break;
  
case 4:  
printf ("Escreva o primeiro numero");
  scanf ("%f", &num1);
printf ("Escreva o primeiro numero\n");
  scanf ("%f", &num2);
  if (num2 != 0)
  {resultado = num1/num2;
  printf ("%f", resultado);
}
else 
  {printf ("\n Erro, divisão por zero");
}
break;

    
  }
  return 0;
}