//WAP to merge arrays
#include<stdio.h>
int merge_arrays(int a[],int b[],int length_1, int length_2){
    int c[100];
    int count=0;
    for(int i=0; i<length_1; i++){
        c[i]=a[i];
        count++;
    }
    int j=0;
    for(int i=count; i<length_2+count; i++){
        c[i]=b[j];
        j++;
    }
    printf("The new merged array is:\n");
    for(int i=0; i<length_1+length_2; i++){
        printf("%d\n",c[i]);
    }
}
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
    merge_arrays(a,b,m,n);
    return 0;
}