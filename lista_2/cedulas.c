#include <stdio.h>
 
int main() {
    int valor;
    scanf("%d", &valor);
    printf("%d\n", valor);
    int x = valor/100;
    printf("%d nota(s) de R$ 100,00\n", x);
    valor = valor%100;
    int b = valor/50;
    printf("%d nota(s) de R$ 50,00\n", b);
    valor = valor%50;
    int c = valor/20;
    printf("%d nota(s) de R$ 20,00\n", c);
    valor = valor%20;
    int d = valor/10;
    printf("%d nota(s) de R$ 10,00\n", d);
    valor = valor%10;
    int e = valor/5;
    printf("%d nota(s) de R$ 5,00\n", e);
    valor = valor%5;
    int f = valor/2;
    printf("%d nota(s) de R$ 2,00\n", f);
    valor = valor%2;
    int g = valor/1;
    printf("%d nota(s) de R$ 1,00\n", g);
     
    return 0;
}