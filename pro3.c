#include<stdio.h>
int main()
{
    // even ---> 1
    // odd ---> 0
    // Enter whole numbers only
    int a;

    printf("Enter your number \n");
    scanf("%d", &a);
    printf("%d", a % 2 == 0);
    return 0;
}

// Check if no. is divisible by 2 or not //
// check if the no. is even or odd //
