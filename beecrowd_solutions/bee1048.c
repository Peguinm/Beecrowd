// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1048

#include <stdio.h>

int main() {

  float salary, adjust;
  int percent;

  scanf("%f", &salary);

  if (salary <= 400) {
    percent = 15;
  } else if (salary <= 800) {
    percent = 12;
  } else if (salary <= 1200) {
    percent = 10;
  } else if (salary <= 2000) {
    percent = 7;
  } else {
    percent = 4;
  }

  adjust = salary * (percent / 100.f);
  salary = salary + adjust;

  printf("Novo salario: %.2f\n", salary);
  printf("Reajuste ganho: %.2f\n", adjust);
  printf("Em percentual: %d %%\n", percent);

  return 0;
}