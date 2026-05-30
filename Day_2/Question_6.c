//Q6. Write a program to reverse a number
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number to be reversed: ");
    scanf("%d", &n);
    for(int i=0; n>0; i++){
        printf("%d", n%10);
        n/=10;       
    }
    return 0;
}