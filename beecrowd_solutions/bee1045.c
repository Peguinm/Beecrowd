// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1045

#include <math.h>
#include <stdio.h>

int main() {

  float a, b, c, h, i;

  scanf("%f %f %f", &a, &b, &c);

  h = a;
  if (a < b) {
    a = b;
    b = h;
  }

  if (a <= c) {
    h = a;
    a = c;
    c = b;
    b = h;
  }

  if (a >= (b + c)) {
    printf("NAO FORMA TRIANGULO\n");
  } else {
    if (pow(a, 2.f) == (pow(b, 2.f) + pow(c, 2.f))) {
      printf("TRIANGULO RETANGULO\n");
    }

    if (pow(a, 2.f) > (pow(b, 2.f) + pow(c, 2.f))) {
      printf("TRIANGULO OBTUSANGULO\n");
    }

    if (pow(a, 2.f) < (pow(b, 2.f) + pow(c, 2.f))) {
      printf("TRIANGULO ACUTANGULO\n");
    }

    if (a == b && b == c && a == c) {
      printf("TRIANGULO EQUILATERO\n");
    } else if (a == b || b == c || a == c) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }

  return 0;
}