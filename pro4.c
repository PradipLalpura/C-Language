#include<stdio.h>
int main()
{
    // true ---> 1
    // false ---> 0
    int x;
    printf("Enter you number \n");
    scanf("%d", &x);
    printf("%d", x > 9 && x < 100);
    return 0;
}

