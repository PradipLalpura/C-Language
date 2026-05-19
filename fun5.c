#include<stdio.h>

void table(int n);

int main(){
    int n;
    printf("ENter your number : ");
    scanf("%d", &n);
    table(n);
    return 0;
}

void table(int n){
    for(int i=1; i<=10; i++){
        int T = n * i;
        printf("%d x %d = %d \n", n, i, T);
    }
}