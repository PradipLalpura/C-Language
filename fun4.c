#include<stdio.h>

int sum(int a, int b);

int main(){
    int a, b;
    printf("Enter yor first no. \n");
    scanf("%d", &a);
    printf("Enter your second no. \n");
    scanf("%d", &b);

    int s = sum(a,b);
    printf("Sum is : %d", s);
    return 0;
}

int sum(int a, int b){
   return a + b; 
}