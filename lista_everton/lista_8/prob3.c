#include <stdio.h>

struct n_complexo{
    float real;
    float im;
};

struct n_complexo soma(struct n_complexo n1, struct n_complexo n2){
    struct n_complexo z3;
    z3.real = n1.real + n2.real;
    z3.im = n1.im + n2.im;
    return z3;
}

int main(){
    struct n_complexo n1, n2;
    scanf("%f %f\n%f %f", &n1.real, &n1.im, &n2.real, &n2.im);
    struct n_complexo r = soma(n1,n2);
    printf("Novo imaginário: %.0f + %.0fi\n", r.real, r.im);

    return 0;
}