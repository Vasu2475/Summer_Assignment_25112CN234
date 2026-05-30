//Q7. Write a prgram to find product of digits.
#include <stdio.h>
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