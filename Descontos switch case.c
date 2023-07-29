#include <stdio.h>

int main(void) {

int tipo=0, desconto=0;
float preco=0, desc;

printf ("Escreva o preço em R$ do produto:\n");
  scanf ("%f", &preco);
printf ("Escreva o tipo do produto\n");
  scanf ("%i", &tipo);

switch (tipo) {
  case 1: 
  desconto = 15;
break;
  case 2: 
  case 3:
  desconto = 20;
break;
  case 4:
  desconto = 23;
break;
desc = preco * (1-(desconto/100));
  printf ("%f", desc);

    
    
    }
  return 0;
}