//WAP to frequency of an element
#include <stdio.h>
int main(){
    int a[100], n;
    printf("Enter how many elements you wanna add: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int element, count=0;
    printf("Enter the element you wanna find frequency of: ");
    scanf("%d", &element);
    for(int i=0; i<n; i++){
        if(a[i]==element){
            count++;
        }
    }
    printf("The element %d appears %d number of times.", element, count);
    return 0;
}