//WAP to linear search
#include <stdio.h>
int main(){
    int a[100],n;
    printf("Enter how many elements you wanna enter: ");
    scanf("%d", &n);
    printf("Enter %d elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int search_element;
    printf("Enter which element you wanna find: ");
    scanf("%d", &search_element);
    int key, f=0, index;
    for(int i=0; i<n; i++){
        if(a[i]==search_element){
            key==a[i];
            index=i+1;
            f=1;
        }
    }
    if(f==1){
        printf("The element %d is at %d index", search_element, index);
    }
    else{
        printf("The element %d doesn't exist in the given list.", search_element);
    }
    return 0;
}