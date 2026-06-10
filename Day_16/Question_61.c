//WAP to find missing number in array
#include<stdio.h>
int main(){
    int a[100], n;
    printf("Enter how many number you wanna enter: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int missing[100],f=0,k=0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            if(i==a[j] && f==0){
                f=1;
            }
        }
        if(f==0){
            missing[k]=i;
            k++;
        }
        f=0;
    }
    printf("The missing numbers are:\n");
    if(k==0){
        printf("There is no missing number!");
    }
    else{
        for(int i=0; i<k; i++){
            printf("%d  ", missing[i]);
        }
    }
    return 0;
}