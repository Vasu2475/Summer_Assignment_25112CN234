//Q11 Write a program to find GCD of two numbers
#include <stdio.h>
int main(){
    int a,b,min,gcd=0;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    if(a>b){
        min=b;
    }
    else{
        min=a;
    }
    for(int i=1; i<=min; i++){
        if(a%i==0 && b%i==0){
            if(i>gcd){
                gcd=i;
            }
        }
    }
    printf("The GCD of %d and %d is %d",a,b,gcd);
    return 0;
}