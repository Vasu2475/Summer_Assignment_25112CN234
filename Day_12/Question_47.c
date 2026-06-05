//WAP to write function for Fibonacci
#include <stdio.h>
int fibonacci(int n){
    int f=0, f1=1, sum=0;
    for(int i=0; i<=n-1; i++){
        printf("%d ", f);
        sum=f+f1;
        f=f1;
        f1=sum;
    }
}
int main(){
    int n;
    printf("Enter how many terms you wanna print: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}