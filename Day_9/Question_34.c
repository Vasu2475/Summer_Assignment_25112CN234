//WAP to print reverse number triangle
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int temp=n;
    for(int i=1; i<=temp; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", j);
        }
        n--;
        printf("\n");
    }
    return 0;
}