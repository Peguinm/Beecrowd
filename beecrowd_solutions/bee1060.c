// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1060

#include <stdio.h>

int main() {

  int positives = 0;

  for (int counter = 0; counter < 6; counter++) {
    float n;
    scanf("%f", &n);

    if (n > 0)
      positives++;
  }

  printf("%d valores positivos\n", positives);
}
