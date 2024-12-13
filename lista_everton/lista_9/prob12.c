#include <stdio.h>

struct n_complexo{
    float real;
    float im;
};

struct n_complexo*  maior(struct n_complexo* n1, struct n_complexo* n2){
    if(n1->real > n2->real){
        return n1;
    } else{
        return n2;
    }
}

int main(){
    struct n_complexo n1, n2;
    scanf("%f %f\n%f %f", &n1.real, &n1.im, &n2.real, &n2.im);
    struct n_complexo *r;
    r = maior(&n1, &n2);
    printf("Maior parte real: %.0f + %.0fi\n", r->real, r->im);

    return 0;
}
