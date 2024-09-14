// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1008

#include <stdio.h>

int main() {

  int cod, hours;
  float hourPay, finalPay;

  scanf("%d", &cod);
  scanf("%d", &hours);
  scanf("%f", &hourPay);

  finalPay = hourPay * hours;

  printf("NUMBER = %d\n", cod);
  printf("SALARY = U$ %.2f\n", finalPay);

  return 0;
}
