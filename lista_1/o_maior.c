#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int aux = ((a+b+abs(a-b))/2);
    int RESULTADO = ((aux+c+abs(aux-c))/2);
    printf("%d eh o maior\n", RESULTADO);
    return 0;
}