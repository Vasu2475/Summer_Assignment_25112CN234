//WAP to find sum and average of array
#include <stdio.h>
int main(){
    int n, a[50];
    printf("Enter how many elements you wanna enter: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    printf("The sum of these %d elements is %d and the average is %f", n, sum, (float) sum/n);
    return 0;
}