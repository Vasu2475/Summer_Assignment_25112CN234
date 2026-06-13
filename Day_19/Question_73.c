//WAP to add matrices
#include <stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    int a[m][n], b[m][n], c[m][n];
    printf("Enter the elements for the first matrix:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements for the second matrix:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The added matrix is:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}