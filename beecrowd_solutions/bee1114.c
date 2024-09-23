// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1114

#include <stdbool.h>
#include <stdio.h>


int main() {

  int s;

  while (true) {
    scanf("%d", &s);

    if (s == 2002)
      break;

    printf("Senha Invalida\n");
  }

  printf("Acesso Permitido\n");

  return 0;
}