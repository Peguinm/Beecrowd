// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1005

#include <stdio.h>
 
int main() {
 
    double a = 0.0, b = 0.0, media = 0.0;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    media = (a * 3.5 + b * 7.5) / 11;
    
    printf("MEDIA = %.5lf\n", media);
    
    return 0;
}