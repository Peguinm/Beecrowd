// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1006

#include <stdio.h>

int main() {

  float a = 0.0, b = 0.0, c = 0.0, res = 0.0;

  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);

  res = (a * 2 + b * 3 + c * 5) / 10.f;

  printf("MEDIA = %.1f\n", res);

  return 0;
}