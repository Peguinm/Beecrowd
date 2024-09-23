// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1096

#include <stdio.h>

int main() {

  int i = 1;
  int j = 7;

  while (i < 9 || i == 9) {
    printf("I=%d J=%d\n", i, j);
    j--;

    if (j == 5) {
      printf("I=%d J=%d\n", i, j);
      i += 2;
      j = 7;
    }
  }

  return 0;
}