//WAP to input and display array
#include <stdio.h>
int main(){
    int n;
    printf("Enter how many entries you wanna make: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("The elements you entered are: \n");
    for(int i=0; i<=n-1; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}