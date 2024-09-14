// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1018

#include <stdio.h>

int main(int argc, char **argv) {

  int value;
  int cels[7] = {100, 50, 20, 10, 5, 2, 1};

  scanf("%d", &value);
  printf("%d\n", value);

  for (int i = 0; i < 7; i++) {
    printf("%d nota(s) de R$ %d,00\n", value / cels[i], cels[i]);
    value -= (value / cels[i]) * cels[i];
  }

  return 0;
}