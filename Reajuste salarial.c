#include <stdio.h>

int main(void) {

double salario, ajuste, n_salario, reajuste;
int percentual;
  printf ("Escreva o seu salário: \n");
    scanf ("%lf", &salario);
  
  
  if (salario <= 400 && salario > 0)
  ajuste = 0.15;
  else 
    if (salario > 400 && salario <= 800)
     ajuste = 0.12;
      else 
        if (salario > 800 && salario <= 1200)
          ajuste = 0.10;
            else 
              if (salario > 1200 && salario < 20000)
                ajuste = 0.07;
                else 
                if (salario > 2000)
                  ajuste = 0.04;
percentual = ajuste * 100;
n_salario = salario + (salario * ajuste);
reajuste = salario * ajuste;
printf ("o novo salario é R$%.2lf, com o ajuste de percentual de %d%% e o valor do reajuste foi de R$%.2lf\n", n_salario, percentual, reajuste);
                   
  return 0;
}