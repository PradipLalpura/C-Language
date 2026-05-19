#include<stdio.h>
int main()
{
    int n;
    printf("Enter numbers of your choice \n");
    do
    {
        scanf("%d", &n);
        if(n % 2 != 0){
            printf("!!!!!!!!!!!!!!!!X_X!!!!!!!!!!!!!!!!!!\n");
            printf("Sorry but this number is very danger to have, please leave it (; \n");
            break;
        }
        else{
            printf("Wow! nice number\n");
            printf("Now, lets check the another number, give it a try \n");
        }
    }while(n!=0);
    return 0;
}