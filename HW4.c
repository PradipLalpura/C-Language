#include<stdio.h>
int main()
{
    char x;

    printf("Input \n");
    scanf("%c", &x);

    if(x >= '0' && x <= '9'){
        printf("Congratulations :) \n");
        printf("Value given is an digit. \n");
    }
    else{
        printf("sorry :( \n");
        printf("Value given is not an digit. \n");
    }
    return 0;
}

// check if the character is digit or not //