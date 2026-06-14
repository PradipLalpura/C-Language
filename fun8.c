#include<stdio.h>

int sum(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("SUM IS : %d", sum(n));
    return 0;
}

int sum(int n){
    int sumnm1 = 0;
    if(n == 1){
        return 1;
    }
    sumnm1 = sum(n - 1);
    int sumn = sumnm1 + n;
    return sumn;
}