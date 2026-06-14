#include<stdio.h>

//int swap1(int a, int b);
//int swap2(int x, int y);
//int swap3(int w, int z);
void swap(int *a, int *b);

int main(){
    int c, d, e;
    c = 5;
    d = 29;
    swap(&c , &d);
    //swap1(&c , &e);
    //swap2(&d , &c);
    //swap3(&e , &d);
    printf("anjali = %d , pradip = %d", c , d);
    return 0;
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

/*int swap1(int a, int b){
    a = b;
    return a;
}

int swap2(int x , int y){
    x = y;
    return x;
}

int swap3(int w , int z){
    z = w;
    return z;
}*/