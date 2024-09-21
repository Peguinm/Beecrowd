// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1038

#include <stdio.h>

int main(int argc, char **argv) {

  float prices[5] = {4., 4.5, 5., 2., 1.5};
  int item, quant;

  scanf("%d %d", &item, &quant);
  printf("Total: R$ %.2f\n", (prices[item - 1] * quant));

  return 0;
}