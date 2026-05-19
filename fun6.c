#include<stdio.h>
#include<stdio.h>
#define pi 3.14159

int square(int a);
int rectangle(int a, int b);
float circle(float c);

int main(){
    int a = 2,b = 4;
    float rad = 3;

    printf("Area of Square is : %d \n", square(a));
    printf("Area of Rectangle is : %d \n", rectangle(a,b));
    printf("Area of Circle is : %f \n", circle(rad));
    return 0;
}

int square(int a){
    return a * a;
}

int rectangle(int a, int b){
    return a * b;
}

float circle(float c){
    return pi * c * c;
}



/*void square();
void rectangle();
void circle();

int main(){
    int choice,s,c,r;
    printf("Enter the area you want to find \n");
    printf("1. Area of SQUARE\n");
    printf("2. Area of RECTANGLE\n");
    printf("3. Area of CIRCLE\n");
    scanf("%d", &choice);

    if(choice == 1){
        square();
    }
    else if(choice == 2){
        rectangle();
    }
    else if(choice == 3){
        circle();
    }
    else{
        printf("Enter valid input \n");
    }
    return 0;
}

void square(){
    int n;
    printf("Nice Choice! \nEnter your side now!!\n");
    scanf("%d", &n);
    printf("Your area of square is : %d \n", n * n);
}

void rectangle(){
    int a,b;
    printf("Nice Choice! \n");
    printf("Enter your length now!!\n");
    scanf("%d", &a);
    printf(" Enter your breadth now!!\n");
    scanf("%d", &b);
    printf("Your area of rectangle is : %d \n", a * b);
}

void circle(){
    float d;
    printf("Nice Choice! \nEnter your radius now!!\n");
    scanf("%f", &d);
    printf("Your area of circle is : %f \n", 3.14 * d * d);
}*/
