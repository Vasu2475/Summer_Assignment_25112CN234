//WAP to print half pyramid pattern.
#include <stdio.h>
int main(){
    int n;
    printf("Enter how many rows do you need: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}