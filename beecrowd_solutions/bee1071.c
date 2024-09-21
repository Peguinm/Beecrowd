// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1071

#include <stdio.h>

int main() {

  int x, y, res = 0;

  scanf("%d %d", &x, &y);

  if (x > y) {
    x = x ^ y;
    y = y ^ x;
    x = y ^ x;
  }

  for (int i = ++x; i < y; i++) {
    res = i % 2 != 0 ? res + i : res;
  }

  printf("%d\n", res);

  return 0;
}