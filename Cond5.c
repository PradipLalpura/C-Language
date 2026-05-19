#include<stdio.h>
int main()
{
    int n;
    printf("enter your no. \n");
    scanf("%d", &n);

    if( n >= 0 ){
        printf("no. is positive \n");
        if( n % 2 == 0){
            printf("even \n");
        }
        else{
            printf("odd \n");
        }
    }
        else{
            printf("negative \n");
        }
    
    return 0;
}

   // Understanding nested if else property //