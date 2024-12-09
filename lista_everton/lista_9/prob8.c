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
struct n_complexo subtracao(struct n_complexo n1, struct n_complexo n2){
    struct n_complexo z3;
    z3.real = n1.real - n2.real;
    z3.im = n1.im - n2.im;
    return z3;
}
struct n_complexo produto(struct n_complexo n1, struct n_complexo n2){
    struct n_complexo z3;
    z3.real = (n1.real * n2.real) - (n1.im * n2.im);
    z3.im = (n1.real * n2.im) + (n2.real * n1.im);
    return z3;
}
int main(){
    struct n_complexo n1, n2;
    scanf("%f %f\n%f %f", &n1.real, &n1.im, &n2.real, &n2.im);
    struct n_complexo s = soma(n1, n2);
    struct n_complexo su = subtracao(n1, n2);
    struct n_complexo p = produto(n1, n2);
    printf("Soma: %.0f + %.0fi\n", s.real, s.im);
    printf("Subtração: %.0f + %.0fi\n", su.real, su.im);
    printf("Produto: %.0f + %.0fi\n", p.real, p.im);
    return 0;
}