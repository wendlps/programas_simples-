#include <stdio.h>

//loop infinito



int valor;

do {
  printf ("Escreva um novo valor, ou 0 para teminar\n");
  scanf("%i \n", &valor);
}
  while (valor !=0);
return 0;
}