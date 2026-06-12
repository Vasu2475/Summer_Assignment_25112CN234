//WAP to selection sort
#include<stdio.h>
int main(){
    int a[100], n;
    printf("Enter how many elements you wanna add: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int min_index, temp;
    for(int i=0; i<n-1; i++){
        min_index=i;
        for(int j=i+1; j<n; j++){
            if(a[min_index]>a[j]){
                min_index=j;
            }
        }
        temp=a[min_index];
        a[min_index]=a[i];
        a[i]=temp;
    }
    printf("The sorted array is:\n");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}