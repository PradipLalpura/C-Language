#include<stdio.h>

void indian();
void french();
void american();

int main(){
    int choice;

    printf("Who are you? \n");
    printf("1. Indian \n");
    printf("2. French \n");
    printf("3. American \n");
    scanf("%d", &choice);
    switch(choice){
        case 1: //printf("Namaste \n");
                indian();
                break;
        case 2: //printf("Bonjour \n");
                french();
                break;
        case 3: //printf("Hello \n");
                american();
                break;
        default:printf("Invalid Choice \n");
    }
    return 0;
}   

void indian(){
    printf("Namaste \n");
}

void french(){
    printf("Bonjour \n");
}

void american(){
    printf("Hello \n");
}