// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1019

#include <stdio.h>

int main(int argc, char **argv) {

  int seconds;

  scanf("%d", &seconds);

  int minutes = seconds / 60;
  seconds -= seconds / 60 * 60;

  int hours = minutes / 60;
  minutes -= minutes / 60 * 60;

  printf("%d:%d:%d\n", hours, minutes, seconds);

  return 0;
}