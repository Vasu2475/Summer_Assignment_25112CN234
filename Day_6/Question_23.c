//WAP to count set bits in a number
#include <stdio.h>
#include <math.h>
int main(){
    int n,bin=0;
    printf("Enter the number to find the set bits for: ");
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
    temp=rev_bin;
    int set_bits=0;
    for(int i=0;temp>0;i++){
        if(temp%10==1){
            set_bits++;
        }
        temp/=10;
    }
    printf("The binary equivalent of %d is %d and it has %d set bits.",n,rev_bin,set_bits);
    return 0;
}