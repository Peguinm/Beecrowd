// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1134

#include <stdio.h>

int main() {

  int combustiveis[3] = {0};

  while (1) {
    int op;
    scanf("%d", &op);

    if (op > 0 && op < 5) {
      if (op == 4)
        break;
      combustiveis[op - 1]++;
    }
  }

  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", combustiveis[0]);
  printf("Gasolina: %d\n", combustiveis[1]);
  printf("Diesel: %d\n", combustiveis[2]);

  return 0;
}