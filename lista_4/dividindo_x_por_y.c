#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int x,y;
        scanf("%d %d", &x, &y);
        if(y==0){
            printf("divisao impossivel\n");
        } else{
            float r = (float)x/y;
            printf("%.1f\n", r);
        }
    }
}