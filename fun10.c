// celcius to fahrenheit

#include<stdio.h>

float CTF(float c);

int main(){
    int c;
    scanf("%d", &c);
    printf("farenhiet = %f", CTF(c));
    return 0;
}

float CTF(float c){
    float f = (c * 9.0 / 5.0) + 32;
    return f;
}