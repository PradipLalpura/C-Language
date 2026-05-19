#include<stdio.h>
int main()
{
    int n; 
    printf("Enter your numbers (: \n");
    do{
        scanf("%d", &n);
        if(n % 7 == 0){
            printf("!!!!!!!!!!!!!!!!!!!!!!!OH NO X_X !!!!!!!!!!!!!!!!!!!!! \n");
            printf("This number is very dangerous, Sorry! we cant help you\n");
            break;
        }
        else{
            printf("Wow! Great number selected, as an reward here is my smile (: \n");
        }
    }while(n != 0);
    return 0 ;
}