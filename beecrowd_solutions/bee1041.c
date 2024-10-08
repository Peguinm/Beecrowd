// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1041

#include <stdio.h>

int main() {
  float x, y;

  scanf("%f %f", &x, &y);

  if (x == 0 || y == 0) {
    if (y == 0 && x != 0) {
      printf("Eixo X\n");
    } else if (x == 0 && y != 0) {
      printf("Eixo Y\n");
    } else {
      printf("Origem\n");
    }
  } else {
    if (y > 0) {
      if (x > 0) {
        printf("Q1\n");
      } else {
        printf("Q2\n");
      }
    } else {
      if (x > 0) {
        printf("Q4\n");
      } else {
        printf("Q3\n");
      }
    }
  }

  return 0;
}