#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int y = 0;
    int z = 0;

    for(int i=0; i<n; i++){
        int x;
        scanf("%d", &x);
        if(x>=10 && x<=20){
            y++;
        } else{
            z++;
        }
    }
    printf("%d in\n%d out\n", y, z);
return 0;
}