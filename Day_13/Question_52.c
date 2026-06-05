//WAP to count even and odd elements
#include <stdio.h>
int main(){
    int n, a[50];
    printf("Enter how many elements you wanna enter: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int even=0, odd=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Number of even elements are: %d\nNumber of odd elements are: %d", even, odd);
    return 0;
}