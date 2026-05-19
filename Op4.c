#include<stdio.h>
int main()
{
    int a,b,c;
    a = 4;
    b = 4;
    c = 5;
    printf("%d \n", a == b);
    printf("%d \n", a == c);
    printf("%d \n", a <= b);
    printf("%d \n", a < c);
    printf("%d \n", a >= b);
    printf("%d \n", c > b);
    printf("%d \n", c >= b);
    printf("%d \n", c != b);
    printf("%d \n", a != b);
    return 0;
}

// Understanding relational operators //