// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1116

#include <stdio.h>

int main() {

  int n, counter = 0;
  scanf("%d", &n);

  while (counter < n) {

    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n2 == 0) {
      printf("divisao impossivel\n");
    } else {
      printf("%.1f\n", ((float)n1 / (float)n2));
    }

    counter++;
  }

  return 0;
}