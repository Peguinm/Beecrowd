// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1067

#include <stdio.h>

int main() {

  int x;
  scanf("%d", &x);

  for (int i = 1; i <= x; i += 2) {
    printf("%d\n", i);
  }

  return 0;
}