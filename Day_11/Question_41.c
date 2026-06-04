//WAP to write function to find sum of two numbers
#include <stdio.h>
int sum(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("The sum of %d and %d is %d", a, b, sum(a,b));
    return 0;
}