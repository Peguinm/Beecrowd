// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1012

#include <stdio.h>

int main(int argc, char **argv) {

  double a, b, c;
  const double PI = 3.14159;

  scanf("%lf %lf %lf", &a, &b, &c);

  printf("TRIANGULO: %.3lf\n", ((a * c) / 2));
  printf("CIRCULO: %.3lf\n", ((c * c) * PI));
  printf("TRAPEZIO: %.3lf\n", ((a + b) * c) / 2);
  printf("QUADRADO: %.3lf\n", b * b);
  printf("RETANGULO: %.3lf\n", a * b);

  return 0;
}