#include <stdio.h>

int main()
{
    double renda, imposto;
    scanf("%lf", &renda);
    if(renda <= 2000.00){
        printf("Isento\n");
    } else if(renda >= 2000.01 && renda <= 3000.00){
        imposto = (renda - 2000.0) * 0.08;
        printf("R$ %.2lf\n", imposto);
    } else if (renda >= 3000.01 && renda <= 4500.00){
        imposto = (renda - 3000.00) * 0.18 + (renda - 2000 -(renda - 3000.0)) * 0.08;   
        printf("R$ %.2lf\n", imposto);
    } else if (renda > 4500.00){
        imposto = (renda - 4500.00) * 0.28 + (renda - 3000.00 -(renda - 4500.00)) * 0.18 + (renda - 2000.00 -(renda -3000.00)) * 0.08;
        printf("R$ %.2lf\n",imposto);

    }


    return 0;
}