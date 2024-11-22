#include <stdio.h>

int main(){
    int qnt = 0;
        for(int i=1; i<=1000; i++){
            if(i%7==0){
                qnt+=1;
            } else{
                continue;
            }
        }
        printf("%d\n", qnt);



   

    return 0;
}