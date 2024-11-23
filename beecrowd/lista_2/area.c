#include <stdio.h>
 
int main() {
    const double PI = 3.14159;
    double A, B, C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    double TRIANGULO = (A * C)/2;
    double CIRCULO = PI * (C * C);
    double TRAPEZIO = ((A + B) * C)/2;
    double QUADRADO = B * B;
    double RETANGULO = A * B;
    printf("TRIANGULO: %.3lf\n", TRIANGULO);
    printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
    printf("QUADRADO: %.3lf\n", QUADRADO);
    printf("RETANGULO: %.3lf\n", RETANGULO);
    
    
    return 0;
}