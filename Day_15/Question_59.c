//WAP to rotate array right
#include<stdio.h>
int rotate_right(int a[], int length){
    int right[length], index_zero;
    right[0]=a[length-1];
    for(int i=0; i<length-1; i++){
        right[i+1]=a[i];
    }
    for(int i=0; i<length; i++){
        printf("%d  ", right[i]);
    }
}
int main(){
    int a[100],n;
    printf("Enter how many elements you wanna add: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Array before rotation:\n");
    for(int i=0; i<n; i++){
        printf("%d  ", a[i]);
    }
    printf("\nArray after right rotation:\n");
    rotate_right(a,n);
    return 0;
}