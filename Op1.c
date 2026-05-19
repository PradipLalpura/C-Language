#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    float f;

    printf("Enter Value a \n");
    scanf("%d", &a);

    printf("Enter Value b \n");
    scanf("%d", &b);

    c = a + b;
    d = a * b;
    f = a / b;

    printf("Value of a is %d \n", a);
    printf("Value of b is %d \n", b);
    printf("Value of c is %d \n", c);
    printf("Value of d is %d \n", d);
    printf("Value of f is %f \n", f);
    return 0;
}

// Understanding basic operations //