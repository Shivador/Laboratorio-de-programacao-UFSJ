#include <stdio.h>
 
int main() {
    const double PI = 3.14159;
    double R;
    scanf("%lf", &R);
    double VOLUME = (4.0/3) * PI * (R * R * R);
    printf("VOLUME = %.3lf\n", VOLUME);


     
    return 0;
}