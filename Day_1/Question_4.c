//Q4. Write a program to count digits in a number
#include <stdio.h>
int main(){
    int count=0, n, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp=n;
    for(int i=0; temp>0; i++){
        temp/=10;
        count++;
    }
    printf("The number of digits in %d is %d", n, count);
}