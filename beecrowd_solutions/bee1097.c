// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1097

#include <stdio.h>

int main() {

  int i = 1;
  int j = 7;
  int h = 2;
  int t = 1;

  while (i <= 9) {
    printf("I=%d J=%d\n", i, j);
    j--;

    if (t == 2) {
      printf("I=%d J=%d\n", i, j);
      i += 2;
      j = 7 + h;
      h += 2;

      t = 0;
    }

    t++;
  }

  return 0;
}