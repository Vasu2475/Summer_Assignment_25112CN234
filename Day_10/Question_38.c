//WAP to print reverse pyramid
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows you wanna print: ");
    scanf("%d", &n);
    int blank=0, star=n+(n-1);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+(n-1); j++){
            if(j>star || j<=blank){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
        blank++;
        star--;
    }
    return 0;
}