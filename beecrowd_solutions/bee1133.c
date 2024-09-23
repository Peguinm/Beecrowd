// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1133

#include <stdio.h>

int main() {

  int n1, n2;
  scanf("%d %d", &n1, &n2);

  if (n1 > n2) {
    n1 ^= n2;
    n2 ^= n1;
    n1 ^= n2;
  }

  int n = n1 + 1;

  while (n < n2) {
    if (n % 5 == 2 || n % 5 == 3) {
      printf("%d\n", n);
    }
    n++;
  }

  return 0;
}