#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    a = c = 3;
    b = d = 2;
    e = f = 4;
    g = h = 5;
    i = j = 6;
    a += b;
    c *= d;
    e /= f;
    g -= h;
    i %= j;
    printf("%d \n", a);
    printf("%d \n", c);
    printf("%d \n", e);
    printf("%d \n", g);
    printf("%d \n", i);
    return 0;
}

// Understanding assignment operators //