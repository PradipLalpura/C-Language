#include<stdio.h>
int main()
{
    char ch;
    
    printf("enter your character \n");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("Your character is Upper Case \n");
    } else if(ch >= 'a' && ch <= 'z') {
        printf("your character is Lower Case \n");
    } else {
        printf("your character is not an alphabet \n");
    }
    return 0;
}