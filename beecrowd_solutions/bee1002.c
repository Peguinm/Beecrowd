// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1002

#include <stdio.h>

int main() {

  const double PI = 3.14159;

  double rad = 0.00;

  scanf("%lf", &rad);

  double area = (rad * rad * PI);
  printf("A=%.4lf\n", area);

  return 0;
}