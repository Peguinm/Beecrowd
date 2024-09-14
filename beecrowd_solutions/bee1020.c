// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1020

#include <stdio.h>

int main(int argc, char **argv) {

  int dias;

  scanf("%d", &dias);

  int anos = dias / 365;
  dias -= anos * 365;

  int meses = dias / 30;
  dias -= meses * 30;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

  return 0;
}