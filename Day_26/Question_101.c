//WAP to create number guessing game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int n, lower, higher;
    printf("Enter the range of number: \n");
    printf("Lower limit- ");
    scanf("%d", &lower);
    printf("\n");
    printf("Higher limit- ");
    scanf("%d", &higher);
    printf("\n");
    if(lower > higher){
        printf("Invalid range!");
        return 0;
    }
    printf("Enter your number: ");
    scanf("%d", &n);
    if(n<lower || n>higher){
        printf("\nThe number %d is out of range!",n);
        return 0;
    }
    srand(time(NULL));
    int random_number=(rand() % higher-lower+1)+lower;
    printf("\n");
    printf("Your number- %d\n",n);
    printf("Actual number- %d\n",random_number);
    if(random_number==n){
        printf("You guessed the correct number!");
    }
    else{
        printf("You guessed the wrong number!");
    }
    return 0;
}