#include<stdio.h>
int main()
{
    char ch;
    printf("enter your character : \n");
    scanf("%c", &ch);

    ch >= 18 ? printf("Adult \n") : printf("Not Adult \n");
    return 0;
}