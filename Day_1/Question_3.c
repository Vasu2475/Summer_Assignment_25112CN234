//Q3. Write a program to find factorial of a number
#include <stdio.h>
int main(){
    int fact=1, n;
    printf("Enter the number you wanna find factorial for: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    printf("The factorial of %d is %d",n,fact );
}