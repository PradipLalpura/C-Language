// declaring pointers 
// 1. int *ptr
// 2. char *ptr
// 3. float *ptr

// format specifiers
// 1. printf("%p", &age);
// 2.printf("%p", ptr);
// 3. printf("%p", &ptr);

// format specifiers for unsigned int which gives good readable address
// 1. printf("%u", &age);
// 2. printf("%u", ptr);
// 3. printf("%u", &ptr);

// format specifiers for printing values
// printf("%d", age);
// printf("%d", ptr);
// printf("%d", &age);
// printf("%d", &ptr);
// printf("%d", *(&age));

#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;

    printf("%p\n", &age);
    printf("%u\n", &age);

    printf("%u\n", ptr);
    printf("%u \n", &ptr);

    //value printing
    printf("%d \n", age);
    printf("%d \n", &age);
    printf("%d \n", ptr);
    printf("%d \n", &ptr);
    printf("%d \n", *(&age));
    printf("%d \n", *(&ptr));
    printf("%d \n", *(*(&ptr)));

    return 0;
}