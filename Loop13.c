#include<stdio.h>
int main()
{
    int n,sum=0;
    for(int i=5; i<=50; i++){
        printf("%d \n", i);
        sum = sum + i;
    }
    printf("%d \n", sum);
    return 0;
}