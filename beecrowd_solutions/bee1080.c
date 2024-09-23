// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1080

#include <stdio.h>

int main() {

  int pos;
  int greater = 0;

  for (int i = 1; i <= 100; i++) {
    int x;
    scanf("%d", &x);

    if (greater < x) {
      greater = x;
      pos = i;
    }
  }

  printf("%d\n", greater);
  printf("%d\n", pos);

  return 0;
}