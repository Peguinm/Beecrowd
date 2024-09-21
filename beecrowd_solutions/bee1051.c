// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1051

#include <stdio.h>

int main() {

  float salary, tax;

  scanf("%f", &salary);

  if (salary <= 2000) {
    printf("Isento\n");
    return 0;
  } else if (salary <= 3000) {
    tax += (salary - 2000) * .08f;
  } else if (salary <= 4500) {
    tax += 1000 * .08f;
    tax += (salary - 3000) * .18f;
  } else if (salary > 4500) {
    tax += 1000 * .08f;
    tax += 1500 * .18f;
    tax += (salary - 4500) * .28f;
  }

  printf("R$ %.2f\n", tax);

  return 0;
}