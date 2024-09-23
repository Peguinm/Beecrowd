// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1074

#include <stdio.h>

int main() {
  int qntValores = 0, numValor = 0, i = 0;

  scanf("%d", &qntValores);

  for (i = 0; i < qntValores; i++) {
    scanf("%d", &numValor);

    if (numValor == 0) {
      printf("NULL\n");
    } else {

      if (numValor % 2 == 0) {
        printf("EVEN ");
      } else {
        printf("ODD ");
      }

      if (numValor > 0) {
        printf("POSITIVE\n");
      } else {
        printf("NEGATIVE\n");
      }
    }
  }

  return 0;
}