//Q8. Write a program to check whether a number is palindrome
#include <stdio.h>
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
    return 0;
}