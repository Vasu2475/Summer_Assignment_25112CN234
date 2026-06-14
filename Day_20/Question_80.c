//WAP to find column wise sum
#include <stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    int a[m][n];
    printf("Enter the elements for the matrix:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int sum=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum+=a[j][i];
        }
        printf("\nThe sum of the column %d is: %d\n",i+1,sum);
        sum=0;
    }
    return 0;
}