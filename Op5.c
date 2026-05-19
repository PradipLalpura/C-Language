#include<stdio.h>
int main()
{
    int a,b,c;
    a = 2;
    b = 3;
    c = 5;
    printf("%d \n", a > b && b > a);                      // false //                                                        
    printf("%d \n", c > b && b > a);                      // true // 
    printf("%d \n", a > b || b > a);                      // true //
    printf("%d \n", a > c || a > b);                      // false //
    printf("%d \n", (a * b) > (a + b) || b > a);          // true //
    printf("%d \n", (a * c) < (a * b) && b > a);          // false //
    printf("%d \n", !(a > b && b > a));                   // true //
    printf("%d \n", !((a * b / b * c + a) > (b * a * c - c))) && c > a;      // true // 
    printf("%d \n", !((a * b / b * c + a) > (b * a * c - c) || (a * b * c) >= (a * b * c / c)));   // false // 
    printf("%d \n", !(((a * b / b * c + a) > (b * a * c - c) || (a * b * c) >= (a * b * c / c)) && a < b));  // false //
    return 0;
}

// Understanding logical operators // 