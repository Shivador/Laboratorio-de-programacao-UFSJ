#include <stdio.h>

float temp(float f){
    float c = (f-32.0) * (5.0/9.0);
    return c;
}

int main(){
    float x;
    printf("Fahrenheit: ");
    scanf("%f", &x);
    float r = temp(x);
    printf("Celsius: %.2f\n", r);

    return 0;
}