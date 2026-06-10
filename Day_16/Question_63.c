//WAP to find pair with given sum.
#include <stdio.h>
void find_pairs(int arr[], int size, int sum) {
    int f=0;
    for (int i=0; i<size-1; i++) {
        for (int j=i+1; j<size; j++) {
            if (arr[i]+arr[j]==sum) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                f=1;
            }
        }
    }

    if (!f) {
        printf("No pair found with the given sum.\n");
    }
}
int main() {
    int a[100], sum, n;
    printf("Enter how many entries you wanna make: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter what sum you wanna find pairs for: ");
    scanf("%d", &sum);
    printf("The pairs are:\n");
    find_pairs(a, n, sum); 
    return 0;
}
