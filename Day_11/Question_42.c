//WAP to write function to find maximum
#include <stdio.h>
int maximum(int a, int b){
    int max;
    if(a>b){
        return a;
    }
    else{
        return b;
    }
    return 0;
}
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("The maximum of the numbers %d and %d is %d", a, b, maximum(a,b));
    return 0;
}