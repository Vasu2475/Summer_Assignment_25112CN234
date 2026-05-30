//Q21. WAP to convert decimal to binary
#include <stdio.h>
#include <math.h>
int main(){
    int n,bin=0;
    printf("Enter the decimal number: ");
    scanf("%d", &n);
    int temp=n, count=0;
    for(int i=0;temp>0;i++){
        if(temp%2==0 && bin==0){
            count++;
        }
        bin=10*bin+(temp%2);
        temp/=2;
    }
    int rev_bin=0;
    for(int i=0;bin>0;i++){
        rev_bin=rev_bin*10+(bin%10);
        bin/=10;
    }
    int power=(int) (pow(10,count)+0.5);
    rev_bin*=power;
    printf("The binary equivalent for %d is %d",n,rev_bin);
    return 0;
}