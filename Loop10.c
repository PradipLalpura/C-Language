#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number for multiplication Table: ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++){
        //int table = n * i;
        printf("%d \n", n * i);
    }
    return 0;
}