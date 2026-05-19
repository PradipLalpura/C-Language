#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter your number for the sum \n");
    scanf("%d", &n);
    do
    {
       sum = sum + i;
       i++; 
    } while (i <= n);
   /*for(i =1; i <= n; i++)
   {
    sum = sum + i;
   }*/
   printf("%d", sum);
   return 0;
}