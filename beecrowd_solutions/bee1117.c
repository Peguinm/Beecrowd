// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1117

#include <stdio.h>

int main() {

  int i = 0;
  float avg;

  while (i < 2) {

    float n;
    scanf("%f", &n);

    if (n < 0 || n > 10) {
      printf("nota invalida\n");
    } else {
      avg += n;
      i++;
    }
  }

  printf("media = %.2f\n", avg / 2.f);
}