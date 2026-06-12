//WAP to binary search
#include<stdio.h>
int main(){
    int a[100], n;
    printf("Enter how many elements you wanna add: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int target;
    printf("Enter which element you wanna find: ");
    scanf("%d", &target);
    int high=n-1, low=0, f=0, index;
    do{
        int mid=(high+low)/2;
        if(a[mid]>target){
            high=mid-1;
        }
        if(a[mid]<target){
            low=mid+1;
        }
        else{
            index=mid;
            f=1;
            break;
        }
    }while(high>=low);
    if(f==0){
        printf("The element is not in the given array!");
    }
    else{
        printf("The element %d is at the index %d", target, index+1);
    }
    return 0;
}