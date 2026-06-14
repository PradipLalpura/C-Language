#include<stdio.h>

int faq(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("The factorial is : %d", faq(n));
    return 0;
}

int faq(int n){
    if(n == 1){
        return 1;
    }
    int faqm1 = faq(n - 1);
    int faqn = faqm1 * n;
    return faqn;
}