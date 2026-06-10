//WAP to remove duplicates from array
#include<stdio.h>
int main(){
    int n, a[100];
    printf("Enter how many numbers you wanna add: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] == a[j]){
                for(int k=j; k<n-1; k++){
                    a[k] = a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("The updated array is:\n");
    for(int i=0; i<n; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}
