// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1013

#include <math.h>
#include <stdio.h>

int main(int argc, char **argv) {

  int n1, n2, n3, greater;

  scanf("%d %d %d", &n1, &n2, &n3);

  greater = (n1 + n2 + abs(n1 - n2)) / 2;
  greater = (greater + n3 + abs(greater - n3)) / 2;

  printf("%d eh o maior\n", greater);

  return 0;
}