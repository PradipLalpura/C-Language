// Pointer to pointer 

// syntax
// int **pptr;
// char **pptr;
// float **pptr;

#include<stdio.h>
int main(){
    float price = 199.23;
    float *ptr = &price;
    float **pptr = &ptr;


    printf("%f \n", *ptr);
    printf("%f \n", price);
    printf("%f \n", *(*pptr));
    return 0;
}