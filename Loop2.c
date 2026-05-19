#include<stdio.h>
int main()
{
    int i;
    for(i = 1; i <= 100 ; i = i + 1) // i = ++i
    {
        printf("%d \n", i);
    }
    return 0;
    /*int i;
    for(i = 100; i >= 1 ; i = i--)
    {
        printf("%d \n", i);
    }
    return 0;*/
}