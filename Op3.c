#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    a = 4;
    b = 5;
    c = a + b;
    d = a * b;
    e = a * c / d * b / d + a;
    printf("%f \n", a);
    printf("%f \n", b);
    printf("%f \n", c);
    printf("%f \n", d);
    printf("%f \n", e);
    return 0;
}

// Arithmetic order wise operation //