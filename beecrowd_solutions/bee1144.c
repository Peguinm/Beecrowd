// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1144

#include <stdio.h>

int main() {

  int lines;
  scanf("%d", &lines);

  for (int i = 1; i <= lines; i++) {
    printf("%d %d %d\n", i, i * i, i * i * i);
    printf("%d %d %d\n", i, i * i + 1, i * i * i + 1);
  }

  return 0;
}