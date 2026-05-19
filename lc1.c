#include<stdio.h>
int main(){
    int n;
    for(int i = 1; i<=50; i++){
        if(i % 2 == 0){
            continue;
        }
        else
        printf("%d \n", i);
    }
    return 0;
}