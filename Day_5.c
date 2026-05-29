#include <stdio.h>
#include <math.h>
//Q17. WAP to check perfect number
/*
int main(){
    int n;
    printf("Enter the number to check if it's perfect or not: ");
    scanf("%d", &n);
    int a[20], temp=n, j=0;
    for(int i=2; i<=(n/2); i++){
        if(temp%i==0){
            a[j]=i;
            j++;
        }
    }
    int sum=1,element;
    for(int i=0;i<=j;i++){
        element=a[i];
        sum+=element;
    }
    if (sum==n){
        printf("The number %d is a perfect number", n);
    }
    else{
        printf("The number %d is not a perfect number", n);
    }
    return 0;
}
*/
//Q18. WAP to check strong number
/**/
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



































