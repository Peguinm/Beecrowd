// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1009

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **agrv) {

  char name[20];
  double salary, salesValue, bonus;

  scanf("%19s", &name);
  scanf("%lf", &salary);
  scanf("%lf", &salesValue);

  bonus = salesValue * .15;

  printf("TOTAL = R$ %.2lf\n", (salary + bonus));

  return 0;
}