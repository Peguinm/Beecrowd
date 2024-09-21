// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1070

#include <stdio.h>

int main() {

  int x, i = 0;
  scanf("%d", &x);

  if (x % 2 == 0) {
    printf("%d\n", ++x);
  } else {
    printf("%d\n", x);
  }

  for (i; i < 5; i++) {
    x += 2;
    printf("%d\n", x);
  }

  return 0;
}