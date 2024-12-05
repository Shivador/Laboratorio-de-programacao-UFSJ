#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rolaDados(){
    int a = (rand() % 6 + 1);
    int b = (rand() % 6 + 1);
    int c = (rand() % 6 + 1);
    printf("%d %d %d\n", a, b, c);

    return a+b+c;
}

int main(){
    srand(time(NULL));
    printf("Soma: %d\n", rolaDados());
    
    return 0;
}