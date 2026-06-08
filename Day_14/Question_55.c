//WAP to second largest element
#include<stdio.h>
int main(){
    int a[100],n;
    printf("Enter how many elements you wanna enter: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int largest=a[0], second_largest;
    for(int i=1; i<n; i++){
        if(a[i]>largest){
            second_largest=largest;
            largest=a[i];
        }
    }
    printf("The second largest number in the given list is: %d", second_largest);
    return 0;
}