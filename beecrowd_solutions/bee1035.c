// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1035

#include <stdbool.h>
#include <stdio.h>

int main(int argc, char **argv) {

  int A, B, C, D;
  bool checker = false;
  scanf("%d %d %d %d", &A, &B, &C, &D);

  checker = (B > C) && (D > A) &&
            ((C + D) > (A + B) && (C > 0) && (D > 0) && (A % 2 == 0));

  if (checker)
    printf("Valores aceitos\n");
  else
    printf("Valores nao aceitos\n");

  return 0;
}