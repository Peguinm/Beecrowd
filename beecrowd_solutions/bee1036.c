// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1036

#include <math.h>
#include <stdio.h>

int main() {
  double A, B, C;
  double delta, R1, R2;

  if (scanf("%lf %lf %lf", &A, &B, &C) != 3) {
    printf("Impossivel calcular\n");
    return 0;
  }

  if (A == 0) {
    printf("Impossivel calcular\n");
    return 0;
  }

  delta = B * B - 4 * A * C;

  if (delta < 0) {
    printf("Impossivel calcular\n");
    return 0;
  }

  double sqrt_delta = sqrt(delta);
  R1 = (-B + sqrt_delta) / (2 * A);
  R2 = (-B - sqrt_delta) / (2 * A);

  printf("R1 = %.5lf\n", R1);
  printf("R2 = %.5lf\n", R2);

  return 0;
}