// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1095

#include <stdio.h>

int main() {

  int i = 1;
  int j = 60;

  while (j >= 0) {
    printf("I=%d J=%d\n", i, j);
    i += 3;
    j -= 5;
  }

  return 0;
}