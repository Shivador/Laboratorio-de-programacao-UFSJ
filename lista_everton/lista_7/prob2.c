#include <stdio.h>
#include <math.h>
#define PI 3.14

float volume(float n){
    float v = (4.0/3 * PI) * pow(n,3);
    return v;
}
int main(){
    float x;
    printf("Raio: ");
    scanf("%f", &x);
    float r = volume(x);
    printf("Volume: %.4f\n", r);

    return 0;
}