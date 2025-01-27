#include <stdio.h>

int main(){
    char x[10];
    scanf("%s", x);
    x[4] = '\0';
    printf("%s\n", x);




    return 0;
}