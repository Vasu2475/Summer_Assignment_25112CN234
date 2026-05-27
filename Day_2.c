#include <stdio.h>
//Q5. Write a program to find sum of digits of a number
/*
int main(){
    int n, sum=0, temp, rem;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp=n;
    for(int i=0; temp>0; i++){        
        rem=temp%10;
        sum+=rem;
        temp/=10;
    }
    printf("The sum of digits of %d is %d", n,sum);
    return 0;
}
*/
//Q6. Write a program to reverse a number
/*
int main(){
    int n;
    printf("Enter the number to be reversed: ");
    scanf("%d", &n);
    for(int i=0; n>0; i++){
        printf("%d", n%10);
        n/=10;       
    }
    return 0;
}
*/
//Q7. Write a prgram to find product of digits.
/*
int main(){
    int n, product=1, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp=n;
    for(int i=0; temp>0; i++){
        product*=temp%10;
        temp/=10;
    }
    printf("The product of digits of %d is %d",n,product);
    return 0;
}
*/
//Q8. Write a program to check whether a number is palindrome
/*
int main(){
    int n, temp, rev=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp=n;
    for(int i=0; temp>0; i++){
        rev=(rev*10+(temp%10));
        temp/=10;       
    }
    if(n==rev){
        printf("%d is a palindrome", n);
    }
    else{
        printf("%d is not a palindrome", n);
    }
}
*/