#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the 3 numbers \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("Your average is %f \n", (a + b + c) / 3);
    return 0;        
}

// Find average of 3 input numbers //