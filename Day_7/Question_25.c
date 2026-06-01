//WAP to recursive factorial
#include <stdio.h>
int factorial(int n){
    int fact=1;
    if (n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
    factorial(factorial(n)*(factorial(n-1)));
}
int main(){
    int n;
    printf("Enter the number to find the factorial for: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d",n,factorial(n));
    return 0;
}