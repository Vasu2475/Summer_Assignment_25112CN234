//Write a programt to find x^n without pow() function.
#include <stdio.h>
int main(){
    int pow,n;
    printf("Enter the base number: ");
    scanf("%d", &n);
    printf("Enter the power: ");
    scanf("%d", &pow);
    int product=1,temp=pow;
    for(int i=0; temp>0; i++){
        product*=n;
        temp--;
    }
    printf("%d raised to the power %d is: %d",n,pow,product);
    return 0;
}