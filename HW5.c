#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter your 2 values \n");
    scanf("%d", &a);
    scanf("%d", &b);

    int smallest = ((a*(a < b)) + (b*(b < a)));
    
    printf("Your smallest value is %d ", smallest );
}
   // program for the smallest value output //
    