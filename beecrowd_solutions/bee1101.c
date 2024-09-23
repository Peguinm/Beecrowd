// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1101

#include <stdio.h>

int main() {

  int n1 = 1;
  int n2 = 1;

  while (n1 > 0 && n2 > 0) {

    scanf("%d %d", &n1, &n2);

    if (n1 <= 0 || n2 <= 0)
      break;

    if (n1 > n2) {
      n1 ^= n2; // 00000011 00000010 0000001
      n2 ^= n1; // 00000001 00000010 0000011
      n1 ^= n2; // 00000001 00000011 0000010
    }

    int amount = 0;
    for (int n = n1; n <= n2; n++) {
      printf("%d ", n);
      amount += n;
    }

    printf("Sum=%d\n", amount);
  }

  return 0;
}
