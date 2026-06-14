//WAP to check symmetric matrix
#include <stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    if(m!=n){
        printf("The concept of symmetric matrix is only applicable on square matrices!");
    }
    else{
        int a[m][n];
        printf("Enter the elements for the matrix:\n");
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                scanf("%d", &a[i][j]);
            }
        }
        int f=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i!=j){
                    if(a[i][j]!=a[j][i]){
                        f=1;
                    }
                }
            }
        }
        if(f!=0){
            printf("The given matrix is not symmetric!");
        }
        else{
            printf("The given matrix is symmetric!");
        }
    }
    return 0;
}