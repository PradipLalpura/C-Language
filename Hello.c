#include<stdio.h>
int main()
{
    int age;
    char star;
    float R;

    printf("Enter your age \n");
    scanf("%d", &age);
 
    printf("Enter your loved character \n");
    scanf(" %c", &star);

    printf("Enter the value of gas constant \n");
    scanf("%f", &R);

    printf("Your age is %d \n", age);
    printf("Your loved character is %c \n", star);
    printf("The value of gas constant is %f \n", R);

    return 0;
}

// printing and scaning practice //