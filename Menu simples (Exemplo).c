#include <stdio.h>

int main(void) {

  int i;

  while (i != 3) {

    printf("Escolha uma das seguintes opções:\n");
    printf("1 - Entrar\n");
    printf("2 - Permanecer\n");
    printf("3 - Sair\n");
    scanf("%d", &i);

    switch (i) {
    case 1: {
      printf("Seja bem vindo ao programa!\n");
      printf("Deseja prosseguir?\n\n1 - Sim\n2 - Não\n");
      scanf("%d", &i);

      if (i == 1) {
        printf("Escolha uma das opções seguintes:\n\n");
      } else if (i == 2) {
        printf("Retornando ao menu anterior...\n\n");
      } else {
        printf("Escolha uma opção valida\n\n");
      }
      break;
    }

    case 2: {
      printf("O menu estará sendo mantido:\n\n");
      break;
    }
    }
  }

  return 0;
}