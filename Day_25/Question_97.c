//WAP to merge two sorted arrays
#include <stdio.h>

int main() {
    int a[100], b[100];
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);
    printf("Enter elements of first sorted array:\n");
    for(int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of second sorted array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    int merged_array[m+n];
    int i=0, j=0, k=0;
    while(i<m && j<n) {
        if(a[i]<=b[j]) {
            merged_array[k]=a[i];
            k++;
            i++;
        }
        else {
            merged_array[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<m) {
        merged_array[k++]=a[i++];
    }
    while(j<n) {
        merged_array[k++]=b[j++];
    }
    printf("The merged array is:\n");
    for(int i=0; i<m+n; i++) {
        printf("%d ", merged_array[i]);
    }

    return 0;
}