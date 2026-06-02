//WAP to print repeated character pattern
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int code=65;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%c", code);
        }
        code++;
        printf("\n");
    }
    return 0;
}