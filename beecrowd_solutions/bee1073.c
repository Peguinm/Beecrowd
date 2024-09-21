// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1073

#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      printf("%d^2 = %d\n", i, i * i);
    }
  }

  return 0;
}