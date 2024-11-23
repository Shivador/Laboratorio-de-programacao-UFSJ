#include <stdio.h>
 
int main() {
    float x, y, total;
    scanf("%f %f", &x, &y);
    if (x==1){
        total = 4 * y;
        printf("Total: R$ %.2f\n", total);
    } else if (x==2) {
        total = 4.50 * y;
        printf("Total: R$ %.2f\n", total);
    } else if (x==3){
        total = 5.00 * y;
        printf("Total: R$ %.2f\n", total);
    } else if (x==4){
        total = 2.00 * y;
        printf("Total: R$ %.2f\n", total);
    } else if (x==5){
        total = 1.50 * y;
        printf("Total: R$ %.2f\n", total);
    }
    return 0;
}