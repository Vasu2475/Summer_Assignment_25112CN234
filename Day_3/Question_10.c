//Q10. Write a program to print prime numbers in a range
#include <stdio.h>
int main(){
    int lower, upper, f=0;
    printf("Enter the lower limit of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper limit of the range: ");
    scanf("%d", &upper);
    for(int i=lower; i<=upper; i++){
        for(int j=2; j<=(i/2); j++){
            if(i%j==0){
                f=1;
            }
        
        }
        if (f==0){
            printf("%d is prime\n",i);
            
        }
        f=0;
    }
    return 0;
}