//WAP to find diagonal sum
#include <stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    int a[m][n];
    int sum=0;
    if(m!=n){
        printf("The concept of diagonal elements is only applicable on square matrices, i.e, rows equal to columns");
    }
    else{
        printf("Enter the elements for the matrix:\n");
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                scanf("%d", &a[i][j]);
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==j){
                    sum+=a[i][j];
                }
            }
        }
        printf("The sum of the diagonal elements is: %d", sum);
    }
    return 0;
}