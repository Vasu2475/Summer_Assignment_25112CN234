//WAP to find largest and smallest element
#include <stdio.h>
int main(){
    int n, a[50];
    printf("Enter how many elements you wanna enter: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int largest=a[0], smallest=a[0];
    for(int i=1; i<n; i++){
        if(a[i]>largest){
            largest=a[i];
        }
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d", smallest);
    return 0;
}