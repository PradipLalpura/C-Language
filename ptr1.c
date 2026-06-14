// syntax //
// int *ptr = &age;
//int _age - *ptr;

#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("age = %d\n", age);
    printf("ptr = %d\n", *ptr);
    printf("_age = %d\n", _age);
    return 0;
}