#include <stdio.h>

int main(){
    int y,x;
    scanf("%d %d", &y, &x);
    int qnt = 0;

    if(x==y){
        printf("0\n");
    }

    if(x%2==0){
        x++;
        for(;x<y;x+=2){
            qnt = qnt + x;
        }
        printf("%d\n", qnt);

    } else if(x%2!=0){
        x+=2;
        for(;x<y;x+=2){
            qnt = qnt + x;
        }
        printf("%d\n", qnt);
    }





    return 0;
}