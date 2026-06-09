//WAP to reverse array
#include<stdio.h>
int main(){
    int a[100],rev[100],n;
    printf("Enter how many elements you wanna enter: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int j=0;
    for(int i=n-1; i>=0; i--){
        rev[i]=a[j];
        j++;
    }
    printf("The reversed array is:\n");
    for(int i=0; i<n; i++){
        printf("%d\n", rev[i]);
    }
    return 0;
}