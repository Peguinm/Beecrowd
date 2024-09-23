// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1118

#include <stdbool.h>
#include <stdio.h>


int main() {

  int i = 0;
  float avg;
  bool showAvg = true;

  while (i <= 2) {
    if (i != 2) {
      float n;
      scanf("%f", &n);
      if (n < 0 || n > 10) {
        printf("nota invalida\n");
      } else {
        avg += n;
        i++;
      }
    } else {
      if (showAvg) {
        printf("media = %.2f\n", avg / 2.f);
        showAvg = false;
      }

      int op;
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &op);

      if (op == 1) {
        showAvg = true;
        avg = 0;
        i = 0;
      } else if (op == 2) {
        break;
      }
    }
  }
}