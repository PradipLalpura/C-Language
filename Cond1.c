#include<stdio.h>
int main()
{
    int marks;

    printf("Enter Marks \n");
    scanf("%d", &marks);

    if( marks >= 90 && marks <= 100){
    printf("Congratulations \n");
    printf("You have achieved an A+ Grade \n");
    }
    else if( marks >= 80 && marks < 90){
    printf("Keep it up \n");
    printf("You are just few steps away \n");
    printf("You have achieved A Grade \n");
    }
    else if( marks >= 65 && marks < 80){
    printf("keep it up \n");
    printf("Practice more \n");
    printf("You have achieved B Grade \n");
    }
    else if( marks >= 35 && marks < 65){
    printf("Work Hard!! \n");
    printf("You have achieved C Grade \n");
    }
    else if( marks >= 0 && marks <35){
    printf("sorry \n");
    printf("you have failed the exam \n");
    }
    else{
      printf("invalid marks");
    }
    return 0;
}

  // conditional statement practice marks //
  // PQ 2 // 