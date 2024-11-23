#include <stdio.h>
 
int main() {
    int horas;
    scanf("%d", &horas);
    int velocidade;
    scanf("%d", &velocidade);
    int distancia = horas * velocidade;
    float gasto = (distancia / 12.0);
    printf("%.3f\n", gasto);

     
    return 0;
}