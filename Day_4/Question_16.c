//Q16 WAP to print armstrong numbers in a range.
#include <stdio.h>
#include <math.h>
int main() {
    int a,b,arm = 0,temp;
    printf("Enter the lower limit of the range: ");
    scanf("%d", &a);
    printf("Enter the upper limit of the range: ");
    scanf("%d", &b);
    for(int i=a; i<=b; i++){
        temp=i;
        int count=0;
        for (int j = 0; temp != 0; j++) {
            count++;
            temp/=10;
        }
        temp=i;
        int rem;
        int p=count;

        while(count>0){
            rem=temp % 10;
            arm=arm + (int)pow(rem, p);
            temp/= 10;
            count--;
        }
        if(arm==i) {
        printf("The given number %d is armstrong!\n", i);
        }
        arm=0;
    }
    return 0;
}