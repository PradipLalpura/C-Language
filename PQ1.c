#include<stdio.h>
int main()
{
    int m;
    printf("Enter the obtained marks(0-100) : \n");
    scanf("%d", &m);

    if( m > 30 && m <= 100){
        printf("pass \n");
    } else if( m >= 0 && m <= 30){
        printf("fail \n");
    } else{
        printf("Invalid Marks \n");
    }
    //  m > 30 ? printf("pass") : printf("fail");
    return 0;
}

// Program to check if student is pass(>30) or fail(<30) // 