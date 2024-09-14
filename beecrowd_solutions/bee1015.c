// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1015

#include <math.h>
#include <stdio.h>

int main(int argc, char **argv) {

  float x1, y1, x2, y2;

  scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

  float dist = sqrt(pow((x2 - x1), 2.f) + pow((y2 - y1), 2.f));

  printf("%.4lf\n", dist);

  return 0;
}