#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float e,f;
    b = 3;
    c = 4;
    a = pow(b,c);
    d = c%b;
    e = 5/6;
    f = 8/3;
    printf("%d \n", a);
    printf("%d \n", d);
    printf("%d \n", e);
    printf("%f \n", f);
    printf("%f \n", 2.566 * 10);
    return 0;
}

// Understanding the modular operation of operands, pow() term and type conversion (int to float etc.) //