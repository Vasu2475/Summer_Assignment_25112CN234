//WAP to convert binary to decimal
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter the binary number: ");
    scanf("%d", &n);
    int dec=0, temp=n;
    for(int i=0;temp>0;i++){
        dec+=((temp%10)*((int)(pow(2,i)+0.5)));
        temp/=10;
    }
    printf("The decimal equivalent of %d is: %d",n,dec);
    return 0;
}