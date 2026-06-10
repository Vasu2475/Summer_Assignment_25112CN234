//WAP to find maximum frequency element
#include<stdio.h>
int main(){
    int a[100], n;
    printf("Enter how many number you wanna enter: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n",n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int freq=0,freq_1=0,max_element;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i]==a[j]){
                freq++;
            }
            if(freq>freq_1){
            freq_1=freq;
            max_element=a[i];
            }
        }
        freq=0;
    }
    printf("The element %d occurs %d number of times", max_element, freq_1);
    return 0;
}