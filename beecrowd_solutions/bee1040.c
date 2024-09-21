// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1040

#include <stdio.h>

int main(int argc, char **argv) {

  float n1, n2, n3, n4, re;
  float media;

  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

  media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
  printf("Media: %.1f\n", media);

  if (media >= 7) {
    printf("Aluno aprovado.\n");
  } else if (media >= 5 && media <= 6.9f) {
    printf("Aluno em exame.\n");
    scanf("%f", &re);
    printf("Nota do exame: %.1f\n", re);

    media = (media + re) / 2;

    if (media >= 5) {
      printf("Aluno aprovado.\n");
    } else {
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n", media);
  } else if (media < 5) {
    printf("Aluno reprovado.\n");
  }

  return 0;
}
