//Q13. Write a program to generate fibonacci series
#include <stdio.h>
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