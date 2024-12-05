#include <stdio.h>
#include <math.h>

struct coordenada{
    float x;
    float y;
    
};
double distancia(struct coordenada x, struct coordenada y){
    double d1, d2;
    if(y.y > x.y){
        if(y.x > x.x){
            d1 = y.x - x.x;
            d2 = y.y - x.y;
        }else {
            d1 = x.x - y.x;
            d2 = y.y - x.y;
        }
    }else if(x.y > y.y){
        if(x.x > y.x){
            d1 = x.x - y.x;
            d2 = x.y - y.y;
        }else {
            d1 = y.x - x.x;
            d2 = x.y - y.y;
        }
    }
    return sqrt(pow(d1, 2) + pow(d2, 2));
}

int main(){
    struct coordenada c1, c2;
    scanf("%f %f %f %f", &c1.x, &c1.y, &c2.x, &c2.y);
    double r = distancia(c1, c2);
    printf("%.2lf\n", r);
    return 0;
}