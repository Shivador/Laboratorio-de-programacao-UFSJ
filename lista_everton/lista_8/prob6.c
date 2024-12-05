#include <stdio.h>
#include <math.h>

struct coordenada{
    float x;
    float y;
};

struct Triangulo{
  struct coordenada p1;
  struct coordenada p2;
  struct coordenada p3;
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
    }else {
        if(x.x > y.x){
            d1 = x.x - y.x;
            d2 = x.y - y.x;
        }else {
            d1 = y.x - x.x;
            d2 = x.y - y.x;
        }
    }
    return sqrt(pow(d1, 2) + pow(d2, 2));
}
void tipo_triangulo(struct Triangulo x){
    double distanciaAB = distancia(x.p1, x.p2);
    double distanciaBC = distancia(x.p2, x.p3);
    double distanciaCA = distancia(x.p3, x.p1);
    printf("%lf %lf %lf\n", distanciaAB, distanciaBC, distanciaCA);
    if((distanciaAB == distanciaBC) && (distanciaBC == distanciaCA)){
        printf("É equilátero\n");
    } else if(((distanciaAB == distanciaBC) && (distanciaCA!=distanciaAB)) || ((distanciaBC == distanciaCA) && (distanciaBC!=distanciaAB)) || ((distanciaCA == distanciaAB) && (distanciaCA!=distanciaBC))){
        printf("É isósceles\n");
    } else if((distanciaAB!=distanciaBC) && (distanciaBC!=distanciaCA)){
        printf("É escaleno\n");
    }
}

int main(){
    struct coordenada p1, p2, p3;
    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);
    scanf("%f %f", &p3.x, &p3.y);
    struct Triangulo t1;
    t1.p1 = p1;
    t1.p2 = p2;
    t1.p3 = p3;
    tipo_triangulo(t1);
    return 0;
}