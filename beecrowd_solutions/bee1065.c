// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1065

#include <stdio.h>

int main() {

  int counter = 0, even = 0;

  while (counter < 5) {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
      even++;
    }
    counter++;
  }

  printf("%d valores pares\n", even);

  return 0;
}
