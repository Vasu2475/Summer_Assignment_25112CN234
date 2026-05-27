#include <stdio.h>
//Q9. Write a program to check whether a number is prime
/*
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
}
*/
//Q10. Write a program to print prime numbers in a range
/*
int main(){
    int lower, upper, f=0;
    printf("Enter the lower limit of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper limit of the range: ");
    scanf("%d", &upper);
    for(int i=lower; i<=upper; i++){
        for(int j=2; j<=(i/2); j++){
            if(i%j==0){
                f=1;
            }
        
        }
        if (f==0){
            printf("%d is prime\n",i);
            
        }
        f=0;
    }
}
*/
//Q11 Write a program to find GCD of two numbers
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
















































