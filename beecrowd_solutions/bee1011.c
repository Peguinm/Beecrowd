// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1011

#include <stdio.h>

int main(int argc, char **argv) {

  const double PI = 3.14159;
  double rad = 0.0, vol = 0.0;

  scanf("%lf", &rad);

  vol = (4.0 / 3.0) * PI * (rad * rad * rad);

  printf("VOLUME = %.3lf\n", vol);

  return 0;
}