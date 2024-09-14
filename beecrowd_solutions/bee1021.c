// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1021

#include <stdio.h>

int main(int argc, char **argv) {

  float value;
  int notas[6] = {100, 50, 20, 10, 5, 2};
  int moedas[6] = {100, 50, 25, 10, 5, 1};
  int newValue;

  scanf("%f", &value);
  newValue = value * 100.f;

  int length = sizeof(notas) / sizeof(notas[0]);

  printf("NOTAS:\n");
  for (int i = 0; i < length; i++) {
    int nNotas = newValue / (notas[i] * 100);
    newValue -= nNotas * (notas[i] * 100);
    printf("%d nota(s) de R$ %d.00\n", nNotas, notas[i]);
  }

  printf("MOEDAS:\n");
  for (int i = 0; i < length; i++) {
    int nMoedas = newValue / moedas[i];
    newValue -= nMoedas * moedas[i];

    // correção burra
    newValue = i == 5 ? (newValue + 1) : newValue;

    printf("%d moeda(s) de R$ %.2f\n", nMoedas, ((float)moedas[i]) / 100.f);
  }

  return 0;
}