// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1064

#include <stdio.h>

int main() {

  int counter = 0, positives = 0;
  float avg;

  while (counter < 6) {
    float n;
    scanf("%f", &n);

    if (n > 0) {
      positives++;
      avg += n;
    }
    counter++;
  }

  avg = avg / (float)positives;

  printf("%d valores positivos\n", positives);
  printf("%.1f\n", avg);
}