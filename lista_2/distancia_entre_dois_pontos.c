#include <stdio.h>
#include <math.h>
 
int main() {
    float x1, y1;
    scanf("%f %f", &x1, &y1);
    float x2, y2;
    scanf("%f %f", &x2, &y2);
    float d1 = (x2 - x1) * (x2 - x1);
    float d2 = (y2 - y1) * (y2 - y1);
    float distancia = (d1 + d2);
    double raiz = sqrt(distancia);
    printf("%.4lf\n", raiz);


     
    return 0;
}