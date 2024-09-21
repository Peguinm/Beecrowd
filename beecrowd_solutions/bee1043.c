// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1043

#include <math.h>
#include <stdio.h>

int main() {

  float a, b, c;

  scanf("%f %f %f", &a, &b, &c);

  if ((a + b) > c && (b + c) > a && (a + c) > b) {
    float perimetro = a + b + c;
    printf("Perimetro = %.1f\n", perimetro);
  } else {
    float area = ((a + b) * c) / 2;
    printf("Area = %.1f\n", area);
  }

  return 0;
}