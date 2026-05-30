//Q9. Write a program to check whether a number is prime
#include <stdio.h>
int main(){
    int n, f=0;
    printf("Enter a number to check if it is prime or not: ");
    scanf("%d", &n);
    for(int i=2; i<(n/2); i++){
        if((n%i)==0){
            f=1;
            break;
        }
    }
    if (f==1){
        printf("%d is not a prime number",n);
    }
    else{
        printf("%d is a prime number",n);
    }
    return 0;
}