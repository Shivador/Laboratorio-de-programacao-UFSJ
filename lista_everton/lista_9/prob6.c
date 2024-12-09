#include <stdio.h>

int main(){
    int x, y;
    int *p, *j;
    p = &x;
    j = &y;
    if(p > j){
        printf("%p\n", p);
    } else{
        printf("%p\n", j);
    }

    return 0;
}