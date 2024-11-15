#include <stdio.h>
 
int main() {
    double fixo;
    scanf("%lf", &fixo);
    double vendas;
    scanf("%lf", &vendas);
    double total = fixo + (vendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);

     
    return 0;
}