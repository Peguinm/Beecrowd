// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1014

#include <stdio.h>

int main(int argc, char **argv) {

  int distance;
  float gas;

  scanf("%d %f", &distance, &gas);

  printf("%.3f km/l\n", distance / gas);

  return 0;
}