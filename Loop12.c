#include<stdio.h>
int main()
{
    int n,T;
    scanf("%d", &n);
    for(int i=10; i>0; i--){
        T = n * i;
        printf("%d \n", T);
    }
    return 0;
}