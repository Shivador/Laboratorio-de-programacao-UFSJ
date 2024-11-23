#include <stdio.h>
 
int main() {
    float x, y, z;
    scanf("%f", &x);
    if (x>=0 && x<=400){
            y = (x * 0.15) + x;
            z = y - x;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", y, z);
        } else if (x>400 && x<=800){
            y = (x * 0.12) + x;
            z = y -x;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", y, z);
        } else if (x>800 && x<=1200){
            y = (x * 0.10) + x;
            z = y - x;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", y, z);
        } else if (x>1200 && x<=2000){
            y = (x * 0.07) + x;
            z = y - x;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", y, z);
        } else if (x>2000){
            y = (x * 0.04) + x;
            z = y - x;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", y, z);
        }
    return 0;
}