// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1046

#include <stdio.h>

int main() {
  int hBegin, hEnd, time;

  scanf("%d %d", &hBegin, &hEnd);

  if (hBegin >= hEnd) {
    time = (hEnd + 24) - hBegin;
  } else {
    time = hEnd - hBegin;
  }

  printf("O JOGO DUROU %d HORA(S)\n", time);

  return 0;
}