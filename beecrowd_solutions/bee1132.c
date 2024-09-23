// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1132

#include <stdio.h>

int main() {

  int n1, n2;
  scanf("%d %d", &n1, &n2);

  if (n1 > n2) {
    n1 ^= n2;
    n2 ^= n1;
    n1 ^= n2;
  }

  int n = n1;
  int amount = 0;
  while (n <= n2) {
    if (n % 13 != 0) {
      amount += n;
    }
    n++;
  }

  printf("%d\n", amount);

  return 0;
}