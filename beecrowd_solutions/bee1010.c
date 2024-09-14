// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1010

#include <stdio.h>

int main() {

  int cod1, cod2, qunt1, qunt2;
  float price1, price2;

  scanf("%d %d %f", &cod1, &qunt1, &price1);
  scanf("%d %d %f", &cod2, &qunt2, &price2);

  printf("VALOR A PAGAR: R$ %.2f\n", (qunt1 * price1 + qunt2 * price2));

  return 0;
}