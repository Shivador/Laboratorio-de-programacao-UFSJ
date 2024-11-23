#include <stdio.h>
 
int main() {
    int number;
    scanf("%d", &number);
    int horas;
    scanf("%d", &horas);
    float valor;
    scanf("%f", &valor);
    float salario = horas * valor;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salario);
    
 
    return 0;
}