//Q5. Write a program to find sum of digits of a number
#include <stdio.h>
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