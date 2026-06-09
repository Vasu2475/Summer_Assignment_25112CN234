//WAP to move zeroes to end
#include<stdio.h>
int zero(int a[], int length, int index){
    for(int i=length-1; i>0; i--){
        if(a[i]!=0 && index<i){
            a[index]=a[i];
            a[i]=0;
            break;
        }
    }
}
int main(){
    int a[100],n;
    printf("Enter how many elements you wanna enter: ");
    scanf("%d", &n);
    printf("Enter %d elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i]==0){
            zero(a,n,i);
        }
    }
    printf("The zeroes are moved to the end:\n");
    for(int i=0; i<n; i++){
        printf("%d  ", a[i]);
    }
    return 0;
}