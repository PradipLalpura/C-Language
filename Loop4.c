#include<stdio.h>
int main()
{
    char ch;
    for(ch='a';ch<='Z';ch= ++ch)
    {
        printf("%c \n", ch);
    }
    printf("Hello world");
    return 0;
}