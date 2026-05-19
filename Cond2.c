#include<stdio.h>
int main()
{
    int age;

    printf("enter age \n");
    scanf("%d", &age);

    age >= 18 ? printf("Adult \n") : printf("Not Adult \n");
    age < 18 && age >= 13 ? printf("Teenager \n") : printf("Not an Teenager \n");
    age < 13 ? printf("Child \n") : printf("Not a child \n");
    return 0;
}

   // ternary conditional operators //