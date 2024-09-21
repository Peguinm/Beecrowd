// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1072

#include <stdio.h>

int main() {

  int n, x, in = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    if (x >= 10 && x <= 20)
      in++;
  }

  printf("%d in\n", in);
  printf("%d out\n", n - in);

  return 0;
}