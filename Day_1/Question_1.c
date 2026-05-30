//Q1. Write a program to calculate the sum of first N natural numbers
#include <stdio.h>
int main(){
    int N, i, sum=0;
    printf("Enter the number of natural numbers you wanna calculate the sum for: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        sum+=i;
    }
    printf("The sum of %d natural numbers is: %d", N, sum);
    return 0;
}