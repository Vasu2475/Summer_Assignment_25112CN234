//WAP to find duplicates in array
#include<stdio.h>
int main(){
    int a[100], n;
    printf("Enter how many elements you wanna add: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int count=0,f=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i]==a[j] && i!=j && f==0){
                count++;
                f++;
            }
        }
        f=0;
    }
    printf("There are %d number of unique duplicate elements in the given array", count/2);
    return 0;
}