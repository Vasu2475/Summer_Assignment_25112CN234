//WAP to sort array in decending order
#include <stdio.h>
int main(){
    int a[100], n;
    printf("Enter how many elements you wanna add: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nElements before sorting:\n");
    for(int i=0; i<n; i++){
        printf("%d  ", a[i]);
    }
    //First we will sort elements in ascending order using bubble sort
    int temp;
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(a[j-1]<a[j]){
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
        }
    }
    printf("\nThe sorted elements in descending order are:\n");
    for(int i=0; i<n; i++){
        printf("%d  ", a[i]);
    }
    return 0;
}