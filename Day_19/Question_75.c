//WAP to transpose matrix
#include <stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    int a[m][n], b[n][m];
    printf("Enter the elements for the matrix:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            b[i][j]=a[j][i];
        }
    }
    printf("The added matrix is:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}