#include<stdio.h>

void printhw(int count);

int main(){
    //int count = 2;
    //printhw(count);
    printhw(2);
    return 0;
}

void printhw(int count){
    if(count == 0){
        return;
    }
    printf("Hello World \n");
    printhw(count-1);
}