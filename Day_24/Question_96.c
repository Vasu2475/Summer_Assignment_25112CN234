// WAP to remove duplicate characters
#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    printf("Enter the string: ");
    fgets(a, 100, stdin);
    int length=strlen(a);
    if (a[length-1]=='\n') {
        a[length-1]='\0';
        length--;
    }
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (a[i]==a[j]) {
                for (int k=j; k<length; k++) {
                    a[k]=a[k+1];
                }
                length--;
                j--;
            }
        }
    }
    printf("The new string is: %s\n", a);
    return 0;
}