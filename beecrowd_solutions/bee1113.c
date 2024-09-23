// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1113

#include <stdbool.h>
#include <stdio.h>


int main() {

  int n1, n2;

  while (true) {
    scanf("%d %d", &n1, &n2);

    if (n1 == n2)
      break;

    if (n1 > n2) {
      printf("Decrescente\n");
    } else {
      printf("Crescente\n");
    }
  }

  return 0;
}