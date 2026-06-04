//WAP to write function to check prime
#include <stdio.h>
int prime(int a){
    int n=a/2, f=0;
    for(int i=2; i<=n; i++){
        if(a%i==0){
            f=1;
            break;
        }
    }
    if (f==0){
        printf("The number %d is prime", a);
    }
    else{
        printf("The number %d is not prime", a);
    }
}
int main(){
    int a;
    printf("Enter the number to check if it's prime or not: ");
    scanf("%d", &a);
    prime(a);
    return 0;
}