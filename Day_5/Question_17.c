//Q17. WAP to check perfect number
#include <stdio.h>
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