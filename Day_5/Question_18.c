//Q18. WAP to check strong number
#include <stdio.h>

int fact(int n){
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,sum=0,rem;
    printf("Enter the number to check for strong number: ");
    scanf("%d", &n);
    int temp=n;
    for(int i=0; temp>0; i++){
        rem=temp%10;
        temp/=10;
        sum+=fact(rem);
    }
    if (sum==n){
        printf("The number %d is a strong number", n);
    }
    else{
        printf("The number %d is not a strong number", n);
    }
    return 0;
}