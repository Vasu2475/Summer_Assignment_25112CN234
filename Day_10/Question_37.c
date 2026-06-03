//WAP to print star pyramid
#include <stdio.h>
int main(){
    int n,count=1;
    printf("Enter the number of rows you wanna print: ");
    scanf("%d",&n);
    int star=(n+(n-1)),blank;
    blank=star-n+2;
    star/=2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n+(n-1)); j++){
            if(j<=star || (j>=blank && j<=(n+(n-1)))){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
        star--;
        blank++;
    }
    return 0;
}