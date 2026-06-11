//WAP to union of arrays
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
    int c[100];
    int k=0,f=0;
    for(int i=0; i<m; i++){
        c[k] = a[i];
        k++;
    }
    for(int i=0; i<n; i++){
        f = 0;
        for(int j=0; j<k; j++){
            if(b[i] == c[j]){
                f = 1;
                break;
            }
        }
        if(f == 0){
            c[k] = b[i];
            k++;
        }
    }   
    printf("The union is:\n");
    for(int i=0; i<k; i++){
        printf("%d\n", c[i]);
    }
    return 0;
}