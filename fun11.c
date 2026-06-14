#include<stdio.h>

float per(int a, int b, int c);

int main(){
    int EGD,FAI,PPS;
    scanf("%d %d %d", &EGD, &FAI, &PPS);
    printf("PERCENTAGE = %f", per(EGD, FAI, PPS));
    return 0;
}

float per(int a, int b, int c){
    int sum = a + b + c;
    float percent = sum / 3.0 / 70 * 100.0;
    return percent;
}