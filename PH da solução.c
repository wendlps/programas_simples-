#include <stdio.h>

int main(void) {
float ph;
  printf ("Escreva o nivel de PH da solução: \n");
  scanf ("%f", &ph);

  if (ph <7)
    printf ("Acida");
  
  if (ph > 7 && ph <14 )
    printf ("Basica");

else 
  printf ("Neutra");
  
  return 0;

}