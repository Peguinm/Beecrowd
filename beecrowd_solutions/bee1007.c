// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1007

#include <stdio.h>

int main(int argc, char **agrv) {

  int a, b, c, d, diff;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  diff = a * b - c * d;

  printf("DIFERENCA = %d\n", diff);

  return 0;
}