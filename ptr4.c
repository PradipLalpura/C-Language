#include<stdio.h>
//call by value
int square (int n);

int main(){
    int number = 4;
    square(number);
    printf("%d", number);
    //printf("%d", square(number));
    return 0;
}

int square(int n){
    int sq = n * n;
    return sq;
}

