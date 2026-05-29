#include <stdio.h>
//Q13. Write a program to generate fibonacci series
/*
int main(){
    int n,f=0,f1=1,sum=0;
    printf("Enter the number of terms you wanna print: ");
    scanf("%d", &n);
    printf("%d ",f);
    for(int i=0; i<=n; i++){
        printf("%d ",f1);
        sum=f+f1;
        f=f1;
        f1=sum;
    }
    return 0;
}
*/
//Q14 WAP to find the nth fibonacci term.
/*
int main(){
    int n,f=0,f1=1,sum=0,term;
    printf("Enter the term you wanna find: ");
    scanf("%d", &n);
    if(n==1){
        printf("The firsst term is: 0");
    }
    else{
        for(int i=1; i<n-1; i++){
        sum=f+f1;
        f=f1;
        f1=sum;
        term=f1;
        }
    }
    printf("The %dth term is %d", n, term);
    return 0;
}
*/
//Q15. WAP to check armstrong number
#include <math.h>
/*
int main() {
    int n,arm = 0,count = 0,temp;

    printf("Enter the number to check if it's armstrong or not: ");
    scanf("%d", &n);
    temp=n;
    for (int i = 0; temp != 0; i++) {
        count++;
        temp/=10;
    }
    temp=n;
    int rem;
    int p=count;

    while(count>0){
        rem=temp % 10;
        arm=arm + (int)pow(rem, p);
        temp/= 10;
        count--;
    }
    if(arm==n) {
        printf("The given number %d is armstrong!", n);
    }
    else{
        printf("The given number %d is not armstrong", n);
    }
    return 0;
}
*/
//Q16 WAP to print armstrong numbers in a range.
/*
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
}
*/























