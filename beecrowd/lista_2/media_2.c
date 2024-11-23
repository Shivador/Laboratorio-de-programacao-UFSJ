#include <stdio.h>
 
int main() {
    double A, B, C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    double notaA = A * 2;
    double notaB = B * 3;
    double notaC = C * 5;
    double media = (notaA + notaB + notaC)/10;
    printf("MEDIA = %.1lf\n", media);
    return 0;
}