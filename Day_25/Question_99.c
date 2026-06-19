//WAP to sort names alphabetically
#include <stdio.h>
#include <string.h>
typedef struct{
    char name[20];
} NAMES;
int main() {
    int n;
    printf("Enter how many names you wanna enter: ");
    scanf("%d", &n);
    if(n<=1) {
        printf("Invalid input!");
        return 0;
    }
    NAMES name[n];
    printf("Enter the names:\n");
    for(int i=0; i<n; i++) {
        scanf("%19s", name[i].name);
    }
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(strcmp(name[j].name, name[j+1].name) > 0) {
                NAMES temp=name[j];
                name[j]=name[j+1];
                name[j+1]=temp;
            }
        }
    }
    printf("\nNames in alphabetical order:\n");
    for(int i=0; i<n; i++) {
        printf("%s\n", name[i].name);
    }
    return 0;
}