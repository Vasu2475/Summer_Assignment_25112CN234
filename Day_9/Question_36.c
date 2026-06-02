//WAP to print hollow square pattern
#include <stdio.h>
int main(){
    int n;
    printf("Enter how many rows you wanna print: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n){
                printf("*");
            }
            else if(i!=n && i!=1 && j==1){
                printf("*");
            }
            else if(i!=n && i!=1 && j==n){
                for(int k=1;k<=(n-2);k++){
                    printf(" ");
                }
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}