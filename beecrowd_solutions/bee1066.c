// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1066

#include <stdio.h>

int main() {

  int counter = 0, even = 0, odd = 0, positives = 0, negatives = 0;

  while (counter < 5) {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
      even++;
    } else {
      odd++;
    }

    if (n > 0) {
      positives++;
    } else if (n < 0) {
      negatives++;
    }
    counter++;
  }

  printf("%d valor(es) par(es)\n", even);
  printf("%d valor(es) impar(es)\n", odd);
  printf("%d valor(es) positivo(s)\n", positives);
  printf("%d valor(es) negativo(s)\n", negatives);

  return 0;
}