// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1061

#include <stdio.h>

int main() {

  int dBegin, dEnd;
  int h1, m1, s1;
  int h2, m2, s2;
  int days, hours, minutes, seconds;
  char buffer[100];

  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "Dia %d", &dBegin);
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%d : %d : %d", &h1, &m1, &s1);

  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "Dia %d", &dEnd);
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%d : %d : %d", &h2, &m2, &s2);

  s1 = h1 * 3600 + m1 * 60 + s1;
  s2 = h2 * 3600 + m2 * 60 + s2;

  if (s1 > s2) {
    days = (dEnd - dBegin - 1);
  } else {
    days = (dEnd - dBegin);
  }

  seconds = s2 - s1;
  if (seconds <= 0) {
    seconds = 24 * 3600 + seconds;
  }

  hours = seconds / 3600;
  seconds = seconds % 3600;
  minutes = seconds / 60;
  seconds = seconds % 60;

  printf("%d dia(s)\n", days);
  printf("%d hora(s)\n", hours);
  printf("%d minuto(s)\n", minutes);
  printf("%d segundo(s)\n", seconds);

  return 0;
}
