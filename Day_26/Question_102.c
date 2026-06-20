//WAP to create voting eligibility system
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=18){
        printf("You are eligible to vote!");
    }
    else if (age<0){
        printf("Not a valid age!");
    }
    else if(age<18){
        printf("You are not eligible to vote!");
    }
    return 0;
}