// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1042

#include <stdio.h>

int main() {

  int n[3] = {0, 0, 0};
  int greater = 0, mid = 0, minor = 0;
  scanf("%d %d %d", &n[0], &n[1], &n[2]);

  for (int i = 0; i < 3; i++) {
    greater = greater > n[i] ? greater : n[i];
  }

  for (int i = 0; i < 3; i++) {
    minor = minor < n[i] ? minor : n[i];
  }

  mid = n[0];
  for (int i = 0; i < 3; i++) {
    if ((mid == greater) || (mid == minor)) {
      mid = n[i];
    }
  }

  printf("%d\n", minor);
  printf("%d\n", mid);
  printf("%d\n\n", greater);

  printf("%d\n", n[0]);
  printf("%d\n", n[1]);
  printf("%d\n", n[2]);

  return 0;
}