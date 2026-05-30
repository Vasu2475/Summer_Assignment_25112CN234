//Q14 WAP to find the nth fibonacci term.
#include <stdio.h>
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