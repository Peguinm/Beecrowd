// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1047

#include <math.h>
#include <stdio.h>


int main() {
  int hBegin, mBegin, hEnd, mEnd, hFinal, mFinal, minutes;

  scanf("%d %d %d %d", &hBegin, &mBegin, &hEnd, &mEnd);

  minutes = (hEnd * 60 + mEnd) - (hBegin * 60 + mBegin);

  if (minutes <= 0) {
    minutes = 1440 + minutes;
  }

  hFinal = minutes / 60;
  mFinal = minutes % 60;

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hFinal, mFinal);

  return 0;
}