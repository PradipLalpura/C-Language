#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your rectangle's sides a and b \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Your perimeter of rectangle is %d \n", (a + b) * 2);
    return 0;
}

// Find perimeter of rectangle //