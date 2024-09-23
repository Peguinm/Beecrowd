// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1142

#include <stdio.h>

int main() {

  int lines;
  scanf("%d", &lines);

  int n = 0;
  for (int i = 0; i < lines; i++) {
    printf("%d %d %d PUM\n", n + 1, n + 2, n + 3);
    n += 4;
  }

  return 0;
}