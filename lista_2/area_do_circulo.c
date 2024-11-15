#include <stdio.h>
 
int main() {
    double n = 3.14159;
    double raio;
    scanf("%lf", &raio);
    double A = n * (raio*raio);
    printf("A=%.4lf\n", A);
    return 0;
}