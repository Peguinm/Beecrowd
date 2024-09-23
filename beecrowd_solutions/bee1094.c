// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1094

#include <stdio.h>

int main() {

  int testes = 0, totalCobaias = 0, totalCoelhos = 0, totalSapos = 0,
      totalRatos = 0;

  scanf("%d", &testes);

  for (int i = 0; i < testes; i++) {

    char letra;
    int numero;

    scanf("%d %c", &numero, &letra);

    totalCobaias += numero;

    if (letra == 'C')
      totalCoelhos += numero;
    else if (letra == 'R')
      totalRatos += numero;
    else if (letra == 'S')
      totalSapos += numero;
  }

  printf("Total: %d cobaias\n", totalCobaias);
  printf("Total de coelhos: %d\n", totalCoelhos);
  printf("Total de ratos: %d\n", totalRatos);
  printf("Total de sapos: %d\n", totalSapos);
  printf("Percentual de coelhos: %.2f %%\n",
         ((float)totalCoelhos / (float)totalCobaias) * 100);
  printf("Percentual de ratos: %.2f %%\n",
         ((float)totalRatos / (float)totalCobaias) * 100);
  printf("Percentual de sapos: %.2f %%\n",
         ((float)totalSapos / (float)totalCobaias) * 100);

  return 0;
}
