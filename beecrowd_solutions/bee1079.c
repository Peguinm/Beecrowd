// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1079

#include <stdio.h>

int main() {

  int n, i = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    float v1, v2, v3;
    scanf("%f %f %f", &v1, &v2, &v3);

    printf("%.1f\n", (v1 * 2 + v2 * 3 + v3 * 5) / 10.f);
  }

  return 0;
}