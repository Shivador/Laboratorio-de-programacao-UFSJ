#include <stdio.h>
struct n_complexo{
    float real;
    float im;
};
void soma(struct n_complexo *n1, struct n_complexo *n2){
    struct n_complexo temp;
    temp.real = n1->real + n2->real;
    temp.im = n1->im + n2->im;
    n1->real = temp.real;
    n1->im = temp.im;
}
void subtracao(struct n_complexo* n1, struct n_complexo* n2){
    struct n_complexo temp;
    temp.real = n1->real - n2->real;
    temp.im = n1->im - n2->im;
    n1->real = temp.real;
    n1->im = temp.im;
}
void produto(struct n_complexo* n1, struct n_complexo* n2){
    struct n_complexo temp;
    temp.real = (n1->real * n2->real) - (n1->im * n2->im);
    temp.im = (n1->real * n2->im) + (n2->real * n1->im);
    n1->real = temp.real;
    n1->im = temp.im;
}
int main(){
    struct n_complexo n1, n2;
    scanf("%f %f\n%f %f", &n1.real, &n1.im, &n2.real, &n2.im);
    soma(&n1, &n2);
    printf("Soma: %.0f + %.0fi\n", n1.real, n1.im);
    subtracao(&n1, &n2);
    subtracao(&n1, &n2);
    printf("Subtração: %.0f + %.0fi\n", n1.real, n1.im);
    soma(&n1, &n2);
    produto(&n1, &n2);
    printf("Produto: %.0f + %.0fi\n", n1.real, n1.im);
    return 0;
}