// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1017

#include <stdio.h>

int main(int argc, char **argv) {

  int dist, time;
  float gas;

  scanf("%d %d", &dist, &time);

  gas = (dist * (float)time) / 12;

  printf("%.3lf\n", gas);

  return 0;
}