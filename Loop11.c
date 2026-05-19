#include<stdio.h>
int main(){
    int n, F=1;
    printf("enter the number for which you want to know the factorial \n");
    scanf("%d", &n);
    for(int i=n; i > 0 ; i--){
        F = F * i;
    }
    printf("%d \n", F);
    return 0;
}