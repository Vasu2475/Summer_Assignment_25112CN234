//WAP to write function for armstrong
#include <stdio.h>
#include <math.h>
int armstrong(int n){
    int arm = 0,count = 0,temp;
    temp=n;
    for (int i = 0; temp != 0; i++) {
        count++;
        temp/=10;
    }
    temp=n;
    int rem;
    int p=count;
    while(count>0){
        rem=temp % 10;
        arm=arm + (int)(pow(rem, p)+0.5);
        temp/= 10;
        count--;
    }
    if(arm==n) {
        printf("The given number %d is armstrong!", n);
    }
    else{
        printf("The given number %d is not armstrong", n);
    }
}
int main(){
    int n;
    printf("Enter the number to check if it's armstrong or not: ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}