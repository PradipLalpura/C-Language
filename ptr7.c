#include<stdio.h>

//call by value

/*float s(float a, float b);
float p(float a, float b);
float a(float a, float b);

int main(){
    float n1 = 3.0;
    float n2 = 5.0;
    s(n1 , n2);
    p(n1 , n2);
    a(n1 , n2);
    printf("%f , %f , %f", s(n1 , n2), a(n1 , n2), p(n1 , n2));
    return 0;
}

float s(float a, float b){
    float sum = a + b;
    return sum;
}

float a(float a, float b){
    float average = s(a , b) / 2;
    return average;
}

float p(float a, float b){
    float product = a * b;
    return product;
}*/

void spa(int a, int b, int *sum, int *product, int *average){
    *sum = a + b;
    *product = a * b;
    *average = (a+b)/2;
}

int main(){
    int a=10,b=20,product, sum, average;
    spa(a , b, &sum, &product, &average);
    printf("%d, %d, %d", sum, product, average);
    return 0;
}