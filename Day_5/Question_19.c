//Q19. WAP to print factors of a number
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number to find the factors for: ");
    scanf("%d", &n);
    printf("The factors of %d are: \n1\n", n);
    for(int i=2;i<=(n/2);i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
    printf("%d",n);
    return 0;
}