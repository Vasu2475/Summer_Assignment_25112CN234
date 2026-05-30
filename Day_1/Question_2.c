//Q2. Write a program to print multiplication table of a given number
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number to print multiplication table for: ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}