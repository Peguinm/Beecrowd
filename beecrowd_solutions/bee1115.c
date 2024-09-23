// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1115

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    int x, y;    
    char quadrante[10];

    while (true) {
        scanf("%d %d", &x, &y);

        if (x == 0 || y == 0) break;

        if (x > 0 && y > 0) strcpy(quadrante, "primeiro");
        if (x < 0 && y > 0) strcpy(quadrante, "segundo");
        if (x < 0 && y < 0) strcpy(quadrante, "terceiro");
        if (x > 0 && y < 0) strcpy(quadrante, "quarto");

        printf("%s\n", quadrante);
    }

    return 0;
}