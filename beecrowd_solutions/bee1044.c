// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1044

#include <stdio.h>

int main() {
  int a, b;

  scanf("%d %d", &a, &b);

  if (a < b && b % a == 0) {
    printf("Sao Multiplos\n");
  } else if (a > b && a % b == 0) {
    printf("Sao Multiplos\n");
  } else {
    printf("Nao sao Multiplos\n");
  }

  return 0;
}