//WAP to find common elements
#include<stdio.h>
int main(){
    int a[100],b[100],m,n;
    printf("Enter how many elements you wanna add in the first array: ");
    scanf("%d",&m);
    printf("Enter how many elements you wanna add in the second array: ");
    scanf("%d",&n);
    printf("\nEnter %d elements for the 1st array:\n",m);
    for(int i=0;i<m;i++){
        scanf("%d", &a[i]);
    }
    printf("\nEnter %d elements for the 2nd array:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d", &b[i]);
    }
    //To remove duplicates from the first array
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            if(a[i] == a[j]){
                for(int k=j; k<m-1; k++){
                    a[k] = a[k+1];
                }
                m--;
                j--;
            }
        }
    }
    //To remove duplicates from the second array
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(b[i]==b[j]){
                for(int k=j; k<n-1; k++){
                    b[k]=b[k+1];
                }
                n--;
                j--;
            }
        }
    }
    int c[100], k=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i]==b[j]){
                c[k]=a[i];
                k++;    
            }
        }
    }
    printf("The common elements are:\n");
    for(int i=0; i<k; i++){
        printf("%d\n", c[i]);
    }
    return 0;
}