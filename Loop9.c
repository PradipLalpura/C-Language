#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter your number for sum and series \n");
    scanf("%d", &n);
    for(int i=1, j=n; i <= n && j>=0; i++, j--)
    {
        sum = sum + i;
        printf("%d \n", j);
    }
    printf("%d \n", sum);
    return 0;
}