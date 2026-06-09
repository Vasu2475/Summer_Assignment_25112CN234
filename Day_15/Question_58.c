//WAP to rotate array left
#include<stdio.h>
int rotate_left(int a[], int length){
    int left[length], index_zero;
    left[length-1]=a[0];
    for(int i=0; i<length-1; i++){
        left[i]=a[i+1];
    }
    for(int i=0; i<length; i++){
        printf("%d  ", left[i]);
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
    printf("\nArray after left rotation:\n");
    rotate_left(a,n);
    return 0;
}