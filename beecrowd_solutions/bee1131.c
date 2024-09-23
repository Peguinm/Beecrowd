// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1131

#include <stdio.h>

#define true 1
#define false 0

int main() {

  int inter = 0, gremio = 0, draw = 0, grenal = 0;
  int i = 0;

  while (true) {
    if (i == 0) {
      int time1, time2;
      scanf("%d %d", &time1, &time2);

      if (time1 > time2)
        ++inter;
      else if (time2 > time1)
        ++gremio;
      else if (time1 == time2)
        ++draw;

      grenal++;
      i += 1;
    } else {
      int op;
      printf("Novo grenal (1-sim 2-nao)\n");
      scanf("%d", &op);

      if (op == 2)
        break;
      else if (op == 1)
        i = 0;
    }
  }

  printf("%d grenais\n", grenal);
  printf("Inter:%d\n", inter);
  printf("Gremio:%d\n", gremio);
  printf("Empates:%d\n", draw);

  if (inter > gremio)
    printf("Inter venceu mais\n");
  else
    printf("Gremio venceu mais\n");

  return 0;
}