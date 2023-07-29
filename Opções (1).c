#include <stdio.h>

//loop infinito



int opcao;

do {
printf ("escolha uma opção:\n")
printf ("1-inserir\n");
printf ("2- Escluir\n");
printf ("3- Alterar\n");
printf ("4-arquivar\n");
}
while ((opcao < 1) || (opcao > 4));

return 0;
}