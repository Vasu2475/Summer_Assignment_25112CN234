//WAP to recursive reverse number
#include <stdio.h>
int reverse(int n, int a){
    if(n==0){
        return a;
    }
    return reverse(n/10, a * 10 + n % 10);
}
int main(){
    int n;
    printf("Enter the number that you wanna reverse: ");
    scanf("%d", &n);
    printf("The reverse of %d is %d", n, reverse(n,0));
    return 0;
}