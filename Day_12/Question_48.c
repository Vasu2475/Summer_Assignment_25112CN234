//WAP to write function for perfect number
#include <stdio.h>
int perfect(int n){
    int sum=1;
    for (int i=2; i<=n/2; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("The number %d is a perfect number", n);
    }
    else{
        printf("The number %d is not a perfect number", n);
    }
}
int main(){
    int n;
    printf("Enter the number to check for perfect number: ");
    scanf("%d", &n);
    perfect(n);
    return 0;
}