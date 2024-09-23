// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1099

#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
      n1 = n1 ^ n2;
      n2 = n1 ^ n2;
      n1 = n1 ^ n2;
    }

    int amount = 0;

    for (int j = n1 + 1; j < n2; j++) {
      if (j % 2 != 0) {
        amount += j;
      }
    }
    printf("%d\n", amount);
  }

  return 0;
}