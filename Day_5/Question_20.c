//WAP to find the largest prime factor
#include <stdio.h>
int main(){
    int n,prime_factor;
    printf("Enter the number to find the largest prime factor for: ");
    scanf("%d", &n);
    int f=0;
    for(int i=2; i<=(n/2); i++){
        for(int j=2;j<=(i/2);j++){
            if(i%j==0){
                f=1;
            }
        }
        if(f==0 && n%i==0){
            prime_factor=i;
        }
        f=0; 
    }
    printf("The largest prime factor of %d is %d", n,prime_factor);
    return 0;
}